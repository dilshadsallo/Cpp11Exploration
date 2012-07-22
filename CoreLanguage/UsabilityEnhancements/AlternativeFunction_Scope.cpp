// Dilshad Sallo, 22.7.2012
// With alternative function syntax , the scope to define return type is not required.

#include <cassert>
class Student {
public:
  enum StudentType { UNDERGRADUATE, POSTGRADUATE};
  StudentType getStudentType() const;
  void setStudentType (StudentType s_type) {
    student_type = s_type;
  }
private:
  StudentType student_type;
};

auto Student::getStudentType() const -> StudentType { // no need to Student::StudentType
  return student_type;
}

int main() {
  Student s;
  s.setStudentType(s.POSTGRADUATE);
  assert(s.getStudentType() == 1);
}
