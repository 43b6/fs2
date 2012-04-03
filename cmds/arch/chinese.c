#include <ansi.h>
inherit F_CLEAN_UP;
mapping use_color = ([
	"BLK":BLK,
	"RED":RED,
	"GRN":GRN,
	"YEL":YEL,
	"BLU":BLU,
	"MAG":MAG,
	"CYN":CYN,
	"WHT":WHT,
	"NOR":NOR,
	"HIR":HIR,
	"HIG":HIG,
	"HIY":HIY,
	"HIB":HIB,
	"HIM":HIM,
	"HIC":HIC,
	"HIW":HIW,
	]);

int main(object me, string arg)
{
	string key, chinz;
	string color,color_r;

	if( !arg || arg=="" )
		return notify_fail("ָ���ʽ��chinese <Ӣ��>==<����>\n");

	if(sscanf(arg,"%s %s==%s",color,key,chinz)==3){
		color_r=use_color[color];
		if(!color_r)	return notify_fail("û��������ɫ��\n");
		CHINESE_D->add_translate(key,color_r+chinz+NOR);
		write(key+"=="+chinz+"\nOk.\n");
		return 1;
	}
	if( sscanf(arg, "%s==%s", key, chinz)==2 ) {
		CHINESE_D->add_translate(key, chinz);
		write( key + " == " + chinz + "\nOk.\n");

		return 1;
	}
	

	return 0;
}

int help()
{
	write ( @HELP
ָ���ʽ��chinese <Ӣ��>==<����>
      or��chinese <��ɫ����> <Ӣ��>==<����>
HELP
	);
	return 1 ;
}
