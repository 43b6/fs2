// made by ccat

#include <weapon.h>
inherit STABBER;
void create()
{
     set_name( "�ٱ�����",({"specail fan","fan","specail"}) );
     set_weight(15000);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","Ľ�����ҵ���������,���Ա任�ɵ����޵���ʹ��.\n"
                  +"( change <type>, ex: change sword )\n"
                  +"( type : unarmed sword blade whip dagger stabber archery throwing)\n");
            set("unit", "��");             
            set("value",2000);
            set("material","steal");
           }         
        init_stabber(45);
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
           set_name("��צ",({"silver claws","claws","specail"}));
           write("�ٱ����ȿ�ʼ������ı仯.\n�ٱ����Ȼ�����һ˫��צ.\n");
           break;
     case "sword":
           set("skill_type", "sword");
           set_name( "����",({"silver sword","sword","specail"}));
           write("�ٱ����ȿ�ʼ������ı仯.\n�ٱ����Ȼ���������.\n");
           break;
     case "archery":
           set("skill_type", "archery");
           set_name( "����",({"silver bow","bow","specail"}));
           write("�ٱ����ȿ�ʼ������ı仯.\n�ٱ����Ȼ���������.\n");
           break;    
     case "blade":
           set("skill_type", "blade");
           set_name( "����",({"silver blade","blade","specail"}));
           write("�ٱ����ȿ�ʼ������ı仯.\n�ٱ����Ȼ���������.\n");
           break;
     case "dagger":
           set("skill_type", "dagger");
           set_name( "��ɫذ��",({"silver dagger","dagger","specail"}));
           write("�ٱ����ȿ�ʼ������ı仯.\n�ٱ����Ȼ�������ɫذ��.\n");
           break;
     case "throwing":
           set("skill_type", "throwing");
           set_name( "����֮��",({"silver star","star","specail"}));
           write("�ٱ����ȿ�ʼ������ı仯.\n�ٱ����Ȼ���������֮��.\n");
           break;      
     case "whip":
           set("skill_type", "whip");
           set_name( "��ɫ�̱�",({"silver whip","whip","specail"}));
           write("�ٱ����ȿ�ʼ������ı仯.\n�ٱ����Ȼ�������ɫ�̱�.\n");
           break;
     case "stabber":
     case "fan":
           set("skill_type", "stabber");
           set_name( "�ٱ�����",({"specail fan","fan","specail"}) );
           write("�ٱ����ȿ�ʼ������ı仯.\n�ٱ����ȱ��ԭ��������.\n");
           break;
     default:      
           write("�ٱ���������ұ�,�����޷������Ҫ�Ķ���.\n");
   }
     return 1;
}
