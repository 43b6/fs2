#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("ʥŮ����",({"girl-cloth","cloth"}) );
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","��");
        set("value", 20000);
        set("armor_type","cloth");
        set("wear_msg","$N������$n֮��,��ȫ�������ƮƮ�ģ��ǳ������\n");
        set("armor_prop/armor", 18);
        set("armor_prop/dodge", 1);
        set("armor_prop/force", 1);
        set("long","
���������֯����������������Ƴ�,��������Ҫ�ľ��������˷�����
������Ч��ֹ������ʽ�Ĺ���������������Ů������ͼ��\n");
        }
         setup();
}





