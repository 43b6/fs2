// made by ccat
#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
set_name(HIR"����"HIW"��ħ��"NOR,({"god_evil_fan","fan"}));     
     set_weight(15000);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","����һ�����������, �����������ı任.\n"
                  +"( change <type>, ex: change sword )\n"
                  +"( type : unarmed sword blade whip dagger stabber )\n");
set("wield_msg", "ֻ�����Ͻ���һ�����ף���������ϳ�����һ��նħ������.\n");
set("unwield_msg", "$N��$n���һ�壬$n���Ͼ���ʧ�ڿ�������\n");                    
            set("unit", "��");             
            set("value",2000);
            set("material","steal");
           }         
        init_stabber(100);
        setup();
}
void init()
{
    add_action("do_change","change");
}
int do_change(string str)
{
   switch(str)
   {
     case "unarmed":
           set("skill_type", "unarmed");
set_name(""HIM"��HIW"s"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"",({"figring"}));
write(""HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"��ʼ�û�.\n"HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"������һ˫"HIM"��HIW"s"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR".\n");
           break;
     case "sword":
           set("skill_type", "sword");
           set_name( ""HIM"��HIW"��HIM"��HIW"��HIM"��HIW"C"NOR"",({"sun_fire_sword"}));
write(""HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"��ʼ�û�.\n"HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"������"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"C"NOR".\n");
           break;
     case "blade":
           set("skill_type", "blade");
           set_name( ""HIM"��HIW"s"HIM"��HIW"u"HIM"��HIW"M"NOR"",({"iceblade"}));
write(""HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"��ʼ�û�.\n"HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"������"HIM"��HIW"s"HIM"��HIW"u"HIM"��HIW"M"NOR".\n");
           break;
     case "dagger":
           set("skill_type", "dagger");
           set_name( ""HIM"��HIW"^"HIM"��HIW"s"HIM"��HIW"P"NOR"",({"god dagger","dagger","god"}));
write(""HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"��ʼ�û�.\n"HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"������"HIM"��HIW"^"HIM"��HIW"s"HIM"��HIW"P"NOR".\n");
           break;
     case "whip":
           set("skill_type", "whip");
           set_name( ""HIM"��HIW"s"HIM"��HIW"��HIM"��HIW"@"NOR"",({"god whip","whip","god"}));
write(""HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"��ʼ�û�.\n"HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"������"HIM"��HIW"s"HIM"��HIW"��HIM"��HIW"@"NOR".\n");
           break;
     case "stabber":
     case "fan":
           set("skill_type", "stabber");
           set_name(""HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"",({"god fan","fan","god"}) );
write(""HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"��ʼ�û�.\n"HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"���ԭ��������.\n");
           break;
     default:      
write(""HIM"��HIW"E"HIM"��HIW"��HIM"��HIW"��HIM"��HIW"��NOR"�޷��û�.\n");
   }
     return 1;
}
