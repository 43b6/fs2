#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;
    string cls;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("ָ���ʽ��addguild <ְҵ����> <��������> <��������>\n");

    if(sscanf(arg,"%s %s %s",cls,key,chinz)==3){
        GUILD_D->add_translate(cls,key,chinz);
		write("����һ��������"+key+"��\n");
		return 1;
	}
	

	return 0;
}

int help()
{
	write ( @HELP
ָ���ʽ��addguild <ְҵ����> <��������> <��������>
 
HELP
	);
	return 1 ;
}
