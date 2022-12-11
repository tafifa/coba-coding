const user1 = {
    firstName: "Tafif",
    lastName: "Assiddiqi",
    age: 18,
    "Nama Lengkap": "Muhammad Tafif Qairawan Assiddiqi",
};
const user2 = {
    firstName: "Jessica",
    lastName: "Gowleta",
    age: 18,
    isStraight: true,
};
user1.age = 19;
console.log("Halo, nama saya", user1.firstName, user1.lastName);
console.log("Umur saya", user1.age.toString(), "tahun");
console.log("Nama lengkap saya", user1["Nama Lengkap"])
console.log(user1);
