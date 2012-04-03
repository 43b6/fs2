// blade.c
#include <weapon.h>
#include <ansi.h>
inherit BLADE;

int damage_down( object me , int power )
{
	message_vision("����$N���ϵ�����ħ����ʧ�ˡ�\n",me);
	me->add_temp("apply/damage",-power);
	delete("in_using");
	return 1;
}
void create()
{
	set_name(HIB"����ħ��"NOR,({"ghost blade","blade"}));
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
     set ("unit","��");
          set("value", 10000);
		set("material", "iron");
	set("long","����һ�Ѵ�˵�е�ħ�����ഫֻҪ��ս����ʹ��(use)�����ܲ���Թ��ħ����\n");
	set("no_drop",1);
	set("no_give",1);
          set("wield_msg", "$Nװ��$n��\n");
		set("unequip_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
          set("armor_prop/blade",10);
	init_blade(60);
	setup();
}
void init()
{
	add_action("do_use","use");
}
int do_use( string arg )
{
	object me = this_player() , ob = this_object();
	int power;
	if( !arg || arg != "blade" ) return 0;
	if( query("in_using") ) return notify_fail("���Ѿ������ˡ�\n");
	if( !this_player()->is_fighting() )
		return notify_fail("��ѵ�������ս���в���ʹ�á�\n");
	if( me->query("force") < 100 )
		return notify_fail("�������������\n");
	message_vision( HIB + @LONG
$N������ħ���������һ�١�������������
��ʱһ�����ɳ��ɽ����ҡ .......
ֻ����ʮ�������Ӱ�Ӿۼ���ħ��֮�ϡ�����
LONG + NOR,me);
	power = me->query("force") / 20;
	me->add_temp("apply/damage", power );
	me->add("force",-100);
	set("in_using",1);
	call_out("damage_down",30,me,power);
	return 1;
}
int query_autoload() { return 1; }
