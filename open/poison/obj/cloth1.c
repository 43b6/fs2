inherit EQUIP;
#include <ansi.h>

void create()
{
        set_name(HIW"���Ϻ�˿��"NOR,({"cold cloth","cloth"}) );
        set_weight(3000);
        set("gender_only", "Ů��");
                if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","һ��ѩ�׵��۷� ,��һ�����صĺ��������� ,
��˵�����������˿���ƶ��ɡ�\n");
        set("unit", "��");
        set("value",10000);
        set("material","cloth");
        set("armor_type", "cloth");
        set("armor_prop/armor",50 );
        set("armor_prop/poison",5 );
        set("wear_msg","$N����$n ,һ�ɺ���Ѹ�ٵ�����$Nȫ�� ,���������ض����� .\n");
        set("remove_msg","$N������$n ,�������������� ,¶����������Ŀ .\n");
        }
        setup();
}
