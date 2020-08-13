#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include "stdexcept"
#include <string>
#include <vector>

using namespace std;

class Matrix{
public:
	Matrix(){
		rows = 0;
		cols = 0;
	}


	void Reset(const int& num_rows, const int& num_columns){
		if (num_rows < 0) {
		      throw out_of_range("num_rows must be >= 0");
		    }
		else if (num_columns < 0) {
		      throw out_of_range("num_columns must be >= 0");
		    }
		else if (num_rows == 0 || num_columns == 0) {
		      rows = cols = 0;
		    }
		else{
			rows = num_rows;
			cols = num_columns;
			matr.assign(num_rows, vector<int>(num_columns));
		}
	}

	Matrix(int num_rows, int num_cols){
		Reset(num_rows, num_cols);
	}

	int At(const int& n_row, const int& n_col) const{
		return matr.at(n_row).at(n_col);
	}

	int& At(const int& n_row, const int& n_col){
			return matr.at(n_row).at(n_col);
	}


	int GetNumRows() const{
		return rows;
	}


	int GetNumColumns() const{
		return cols;
	}

private:
	int rows;
	int cols;
	vector<vector<int>> matr;
};

bool operator ==(const Matrix& lhs, const Matrix& rhs){
		if (lhs.GetNumRows() == rhs.GetNumRows() && lhs.GetNumColumns() == rhs.GetNumColumns()){
			for (int i=0; i < lhs.GetNumRows(); i++){
				for (int j=0; j < rhs.GetNumColumns(); j++){
					if (lhs.At(i, j) != rhs.At(i, j)) return false;
				}
			}
			return true;
		} else return false;
}

Matrix operator +(const Matrix& lhs, const Matrix& rhs){
	if (lhs.GetNumRows() == rhs.GetNumRows() && lhs.GetNumColumns()  == rhs.GetNumColumns()){
		Matrix m(lhs.GetNumRows(), rhs.GetNumColumns());
		for (int i=0; i < lhs.GetNumRows(); i++){
			for (int j=0; j < rhs.GetNumColumns() ; j++){
				m.At(i, j) = lhs.At(i, j) + rhs.At(i, j);
			}
		}
		return m;
	} else if (lhs.GetNumRows() != rhs.GetNumRows()) {
	    throw invalid_argument("Mismatched number of rows");
	  }

	else if (lhs.GetNumColumns() != rhs.GetNumColumns()) {
	    throw invalid_argument("Mismatched number of columns");
	  }
}

ostream& operator<<(ostream& os, const Matrix& m){
	os << m.GetNumRows() << " " << m.GetNumColumns() << "\n";
	for (int i=0; i<m.GetNumRows(); i++){
		for(int j=0; j<m.GetNumColumns(); j++){
			if (j != m.GetNumColumns()-1) os << m.At(i, j) << " ";
			else os << m.At(i, j);
		}
		os << "\n";
	}
	return os;
}

istream& operator>>(istream& is, Matrix& m){
	int n, k;
	is >> n >> k;
	m.Reset(n, k);
	for (int i=0; i<n;i++){
		for(int j=0; j<k; j++) is >> m.At(i, j);
	}
	return is;
}

int main() {
  Matrix one;
  Matrix two;
  cin >> one >> two;
  cout << one + two << endl;
  return 0;
}
