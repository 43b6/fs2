#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;
	string class1;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("ָ���ʽ��punlsih <�ܷ���> <�̷�>\n");

	if(sscanf(arg,"%s %s",class1,key)==2){
		switch(key)
		{
		case "no_call" :
			PUNLISH_D->add_translate(class1,key,"no_call");
			break;
		default :
			return notify_fail("û�������̷���\n");
		}

		return 1;
	}
	

	return 0;
}

int help()
{
	write ( @HELP
ָ���ʽ��punlish <�ܷ���> <����>
 
HELP
	);
	return 1 ;
}
