#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
     set_name( "��պ����",({"emery-firer","firer"}) );
     set_weight(11500);
     if( clonep() ) 
            set_default_object(__FILE__);
     else {
            set("long","ͽ����������ϵ�Ժ��׿�ʯ�������ƶ��ɣ��������Ͽ���
	    ��ǿ��������Ҳ����ʹ����ս���б������϶��Ǳ�ܡ�\n");
            set("unit", "��");             
            set("value",10000);
            set("material","iron");
            }
            init_unarmed(45);
 
          setup();
}                   