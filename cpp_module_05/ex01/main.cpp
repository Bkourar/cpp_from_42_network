#include "Bureaucrat.hpp"

int main() {

	/*------------------- test 1 ------------------*/
	// try {
	// 		Form b("kahy", false, 1, 50);
	// 		std::cout << b;
	// 		b.incrementGrade();
	// 		std::cout << b;  
	// 		b.decrementGrade();
	// 		std::cout << b;

	// 		// Testing exception
	// 		/*------------------ High increment Grade --------------------------*/
	// 		Form highGradeForm("High Grade", false, 4, 1);
	// 		highGradeForm.incrementGrade();  // This will throw GradeTooHighException
	// 		/*------------------ Low decrement Grade -------------------------*/
	// 		Form lowGradeForm("Low Grade", false, 1, 150);
	// 		lowGradeForm.decrementGrade();  // This will throw GradeTooLowException

	// 	} catch (const Form::GradeTooHighException& ex) {
	// 		std::cout << ex.what() << std::endl;
	// 	} catch (const Form::GradeTooLowException& ex) {
	// 		std::cout << ex.what() << std::endl;
	// 	}
	/*------------------- test 2 ------------------*/
			Bureaucrat b("bilal", 2);  
			std::cout << b;
			Form d("omar", false, 50, 4);
			b.signForm(d);
	return 0;
}
