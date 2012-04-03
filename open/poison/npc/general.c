
#include <ansi.h>
#include "/open/open.h" 
inherit F_SOLDIER;
void create()
{
	set_name("����",({"general"}) );
	set("long","
һλ���ղ����Ľ��������ϴ������ף��������ű�����������ʮ�����䡣
������Ĵ���˵��λ��������һ��ս���и����ӵ��˴��������������
����ķ��������������������˾����ڴ˶��ӡ�\n");
	set("age",30);
	set("str",30);
	set("con",30);
	set("attitude","heroism");
	set("officer_power",50);
	set("max_officer_power",50);
	set("class","officer");
	set("soldier_list",([
	"soldier" : "��ʿ(soldier)",
	"fighter" : "��ʿ(fighter)",
	"guard" : "����(guard)",
]) );
	set("soldier_lv",([
	"soldier" :5,
	"fighter" :10,
	"guard"   :15,
]) );
	set("max_kee",500);
	set("max_gin",500);
	set("max_sen",400);
	set("combat_exp",150000);
	set_temp("apply/armor",20);
	set_temp("apply/dodge",20);
	set_temp("apply/attack",30);
	set_skill("literate",60);
	set_skill("unarmed",40);
	set_skill("sword", 40);
	set_skill("blade",50);
	set_skill("move",40);
	set_skill("dodge",45);
	set_skill("nine-steps",40);
	set_skill("parry",45);
	set_skill("her-blade", 50);
	map_skill("move","nine-steps");
	map_skill("parry","her-blade");
	map_skill("dodge","nine-steps");
	map_skill("blade","her-blade");
	set("gender","����");
	set("chat_chance_combat", 8);
	setup();
	add_money("gold",5);
	carry_object("/open/poison/obj/boots.c")->wear();
	carry_object("/open/poison/obj/plate.c")->wear();
	carry_object("/open/poison/obj/tblade.c")->wield();
	carry_object("/open/poison/obj/cloak.c")->wear();
	carry_object("/open/poison/obj/helmet.c")->wear();
}

void die()
{
	object me;
	me=query_temp("last_damage_from");
	message_vision("\n",me);
	message_vision(HIR "һ�������Ѫ����������ϡ�\n" NOR,me);
	message_vision(" ���������嵹��Ѫ����΢΢�ز����š�\n",me);
	tell_room(me,"����˵:��......��Ầ���������....�ġ�\n");
	call_out("msg2",1,me);
}
 void msg2(object me)
{	 
	message_vision("\n",me);
message_vision(HIG "ɽ��ආ����:�Ǹ�������Ľ�����������������!!\n" NOR,me);

message_vision(HIG "ɽ��ͷĿ����:С���ǣ��һ�׼���ã�Ҫ������!!!\n" NOR,me);
	tell_room(me,"�㲻������:��!������ˡ�\n");
	new("/open/poison/npc/bandit4.c")->move("/open/poison/room/v2-6.c");
	new("/open/poison/npc/bandit2.c")->move("/open/poison/room/v2-6.c");
	new("/open/poison/npc/bandit1.c")->move("/open/poison/room/v2-4.c");
	new("/open/poison/npc/bandit1.c")->move("/open/poison/room/v2-4.c");
	new("/open/poison/npc/bandit2.c")->move("/open/poison/room/v2-2.c");
	new("/open/poison/npc/bandit1.c")->move("/open/poison/room/v2-2.c");
	new("/open/poison/npc/bandit1.c")->move("/open/poison/room/v2-1.c");
	new("/open/poison/npc/bandit1.c")->move("/open/poison/room/v2-8.c");
	::die();
	return 0;

}
