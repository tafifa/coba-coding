const routes = [
  {
    method: 'GET',
    path: '/',
    handler: (request, h) => {
      return 'Homepage';
    }
  },
  {
    method: '*',
    path: '/',
    handler: (request, h) => {
      return 'Halaman tidak dapat diakses dengan method tersebut';
    }
  },
  {
    method: 'GET',
    path: '/about',
    handler: (request, h) => {
      return 'About Page';
    }
  },
  {
    method: '*',
    path: '/about',
    handler: (request, h) => {
      return 'Halaman tidak dapat diakses dengan method tersebut';
    }
  },
  {
    method: 'GET',
    path: '/user/{name?}',
    handler: (request, h) => {
      const { name = "anonymous" } = request.params;
      const { lang } = request.query;
      if (lang == 'id') {
        return `Halo, ${name}!\nSelamat datang di Hapi-Hapi`;  
      }
      return `Hello, ${name}!\nWelcome to Hapi-Hapi!`;
    }
  },
  {
    method: 'POST',
    path: '/login',
    handler: (request, h) => {
      const { username, password } = request.payload;
      if (password == '1234') {
        return `Welcome ${username}!`;
      }
      return 'Incorrect Password!';
    }
  },
  {
    method: '*',
    path: '/{any*}',
    handler: (request, h) => {
      return 'Halaman tidak ditemukan';
    }
  },
]

module.exports = routes