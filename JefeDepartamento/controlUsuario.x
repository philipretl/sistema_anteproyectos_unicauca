/*Declaracion de datos a transferir entre el cliente y el servidor*/
/*Declaracion de constantes*/

const MAXNOM = 40;
const MAXUSUARIO = 10;

struct usuarios{
	char nombres[MAXNOM];
	char usuario_unicauca[MAXUSUARIO];
	int id_usuario;
	char contrasenia[MAXUSUARIO];
	char rol[MAXNOM];
	
};

struct sesion{
	char usuario_unicauca[MAXUSUARIO];
	char contrasenia[MAXUSUARIO];	
	
};

program controlUsuario{
	version controlUsuario_version{
		sesion iniciar_sesion(sesion objsesion)=1;
		bool registrar(usuario objusuario)=2;

	
	}=1;
}=0x20000001;
