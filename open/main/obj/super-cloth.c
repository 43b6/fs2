// ph_hat.c
#include <armor.h>
#include <ansi.h>
object user;
inherit EQUIP;

void create()
{
	set_name( HIG "ȸ�ʷ�����" NOR ,({"super cloth","cloth"}));
	set_weight(1000);
          set("armor_type","cloth");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
		set("value",100000);
                set("material","cloth");
		set("armor_prop/armor",50);
               set("armor_prop/dodge", 10);
                set("armor_prop/move", 10);
                                             
        }
        setup();
}
int init()
{
    add_action("do_wear","wear");
}    
int do_wear(string str)
{
::wear();
 if( query("equipped") )
 {
   user = this_player();
   message_vision(HIG"$N�����ھ�,����ȸ����ձ��γ�ȸ�ʷ����ѻ���,��$N�������𵭵�����ɫ����.\n"NOR,user);
}   
}

