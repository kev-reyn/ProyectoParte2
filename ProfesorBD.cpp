/*
 * ProfesorBD.cpp
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#include "ProfesorBD.h"
#include "Profesor.h"

namespace std {

ProfesorBD::ProfesorBD() {
	// TODO Auto-generated constructor stub

}

ProfesorBD::~ProfesorBD() {
	// TODO Auto-generated destructor stub
}

int ProfesorBD::guardaProfesor(Profesor profesor){ // @suppress("Member declaration not found")
	int res;
	res = 1;
	if(res==1){
	cout<<"Se guardo correctamente";
	return res;
	}else
		return 0;
}

} /* namespace std */
