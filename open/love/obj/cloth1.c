// Qc by Anmy 98/7/6
#include <armor.h>
#include <ansi.h>
inherit CLOTH;
object user;
void create()
{
        set_name( HIW "ˮ������" NOR ,({"pebble cloth","cloth"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",1000);
                set("material","gem");
                set("armor_prop/armor",15);
                set("armor_prop/dodge",3);
                set("armor_prop/move",3);

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
   message_vision(HIW"$N�����ھ�,����ˮ�����±��γ�ˮ������,��$N��������
���İ�ɫ����.\n"NOR,user);
   set_heart_beat(1);
 }
}
void heart_beat()
{
	if( !user ) return;
 if( user->is_fighting() && query("equipped"))
{
 if( random(100) > 80)
   {
     user->receive_curing("kee",30);
     user->receive_heal("kee",30);
message_vision(HIW"��ɢ��һ���׹⻤ס$N��ȫ��,$N�����ƽ�����ԭ��.\n"NOR,user);
     }
       }
   }
