#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("��֮ȭ����",({"wind-robe","robe"}) );
        set_weight(8500);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","��");
        set("value", 3000);
        set("armor_type","cloth");
        set("wear_msg","$N������$n֮��,��������,���ܵ��������������������,�γ��˸�ѹ������,������$N!!\n");
        set("remove_msg","$N������$n֮��,�����𽥵���ɢ�ڿ���֮��......\n");
        set("armor_prop/armor", 10);
        set("long","
������ë�����Ƴ�.�·���ǰ�������ʥ��̵�ʥ��ͼ��,
ʥ��̽���ϰ��֮�˾��Դ�Ϊװ��\n");
        }
         setup();
}





