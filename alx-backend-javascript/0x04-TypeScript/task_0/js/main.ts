interface Student {
  firstName: string;
  lastName: string;
  age: number;
  location: string;
}

const student1: Student = {
  firstName: "Simphiwe",
  lastName: "Nkwanyana",
  age: 20,
  location: "Johannesburg",
};

const student2: Student = {
  firstName: "Semukelo",
  lastName: "Mathe",
  age: 21,
  location: "Cape Town",
};

const studentList: Array<Student> = [
  student1,
  student2
];

for (const student in studentList){
  console.log(student);
}