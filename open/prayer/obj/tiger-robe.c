#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("��֮ȭ����",({"tiger-robe","robe"}) );
        set_weight(9000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","fur");
        set("unit","��");
        set("value", 6000);
        set("armor_type","cloth");
        set("wear_msg","$N������$n֮��,ȫ��������а��һ���ë��,��ʱֻ��$N�𽥱����а���սʿ\n");
        set("remove_msg","$N������$n֮��,ë��һƬƬ�ص�������,$N��������,�������˵�ƣ��......\n");
        set("armor_prop/armor", 14);
        set("long","
����а���������е�а����Ƥ���Ƴ�.�·���ǰ�������ʥ��̵�ʥ��ͼ��,
��ʥ��̽����ܹܼ����ϵ������������\n");
        }
         setup();
}





