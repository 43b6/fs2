#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
     set_name( "��֮������",({"dragon-icer","icer"}) );
     set_weight(12000);
     if( clonep() ) 
            set_default_object(__FILE__);
     else {
            set("long","ͽ����������ϵ���������겻��ѩʯ�µľ��ִ�����ɣ��������ϳ�
	    ����ǿ������֮�⣬������ʹ����ս�����侲���жϵ��˵Ĺ��ơ�\n");
            set("unit", "��");             
            set("value",20000);
            set("material","steel");
            }
            init_unarmed(75);
 
          setup();
}                   