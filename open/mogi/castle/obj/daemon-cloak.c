//����ħ�� cloak
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIB"а"HIW"��"HIB"��"HIW"��"NOR,({"daemon cloak","cloak"}) );
	set_weight(600);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
����ħ����ר�����磬�ɲ�֪���ļ���˿���Ƴɡ�
\n");
        set("unit", "��");
        set("value",50000);
        set("armor_type","cape");
        set("material","leather");
	set("armor_prop/armor",7);
	set("armor_prop/unarmed",3);
        set("armor_prop/parry",3);
         }
        setup();
}
int query_autoload()
{
 return 1;
}
