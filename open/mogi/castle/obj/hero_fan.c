// made by roger

#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
     set_name( HIB"�������"NOR,({"onion"}) );
     set_weight(8000);
     if( clonep() )
               set_default_object(__FILE__);
     else {
        set("long","�Ϲ�ħ����������,���Ա任�ɵ����޵���ʹ�á�ħ��\n"
                  +"����ʱ����Ӣ�۵�ǹƥ��ɹ��Ĵ�����ħ�磬����\n"
                  +"����С���ü����ħ��֮����������Ϊ����Ӣ��\n"
                  +"��������������\n"
                  +"( change <type>, ex: change sword )\n"
                  +"( type : unarmed sword blade whip dagger stabber )\n");
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        set("no_put",1);
        set("no_give",1);  
            set("unit", "��");
            set("value",10000000);
            set("material","steal");
           }
        init_stabber(65);
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
           set_name(HIB"�������צ"NOR,({"onion claws","claws"}));
           write("������п�ʼ������ı仯.\n������л�����һ˫�������צ.\n");
           break;
     case "sword":
           set("skill_type", "sword");
           set_name( "������н�",({"onion sword","sword"}));
           write("������п�ʼ������ı仯.\n������л����˰�����н�.\n");
           break;
     case "blade":
           set("skill_type", "blade");
           set_name( "������е�",({"onion blade","blade"}));
           write("������п�ʼ������ı仯.\n������л����˰�����е�.\n");
           break;
     case "dagger":
           set("skill_type", "dagger");
           set_name( "�������",({"onion dagger","dagger"}));
           write("������п�ʼ������ı仯.\n������л����˰������ذ��.\n");
           break;
     case "whip":
           set("skill_type", "whip");
           set_name( "������б�",({"onion whip","whip"}));
           write("������п�ʼ������ı仯.\n������л����˰�����б�.\n");
           break;
     case "stabber":
     case "fan":
           set("skill_type", "stabber");
           set_name( HIB"�������"NOR,({"onion device","device"}) );
           write("������п�ʼ������ı仯.\n������б��ԭ������״.\n");
           break;
     default:
           write("�����������ұ�,�����޷������Ҫ�Ķ���.\n");
   }
     return 1;
}
int query_autoload()
{
 return 1;
}
