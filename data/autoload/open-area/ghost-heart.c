#include <armor.h>
#include <ansi.h>
inherit NECK;
object me=this_player();
void create()
{
                set_name(HIY"����֮��"NOR, ({ "ghost heart" ,"heart" }) );
                set_weight(50);
                if( clonep() )
                set_default_object(__FILE__);
                else {
                set("long", "ǧ���������������ӵ�У�ӵ��δ֪�������������\n");
                set("unit", "��");
                set("value", 300000);
                set("material", "steal");
                set("no_auc",1);
                set("no_sell",1);
                set("no_give",1);
                set("no_put",1);
                set("no_drop",1);
//                set("no_get",1);
                set("no_steal",1);
                set("armor_prop/armor", 5);
                set("armor_prop/dodge", 5);
                set("armor_prop/parry", 5);
                set("armor_prop/unarmed", 5);
                set("armor_prop/force", 5);
                set("wear_msg", HIW"$N����$n"HIW"һ����������$Nȫ��\n"NOR);
                set("unequip_msg", HIW"$N������$n"HIW"һ��������$N"HIW"������ʧ��\n"NOR);
                }
                setup();
                set_heart_beat(1);
}

int query_autoload()
{
	return 1;
}

void heart_beat()
{

	if( !objectp(me) )
	{
	set_heart_beat(0);
	return ;
	}
        if( query("equipped") )
        {
          if(random(100) > 20)
          {
          me->receive_curing("kee",3);
          me->receive_heal("kee",3);
          me->receive_curing("gin",2);
          me->receive_heal("gin",2);
          me->receive_curing("sen",2);
          me->receive_heal("sen",2);
          }
        }
}

int init()
{
	object ob;
	ob=this_object();

	if( !ob ) return 1;
	if( !me ) return 1;

	if( !ob->query("boss") )
	{
	ob->set("boss",me->query("id"));
	}
}