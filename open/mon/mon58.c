inherit ROOM;
#include <ansi.h>

void create ()
{
	set ("short", "������");
	set ("long", @LONG
���붴�У��������Ϸ�΢΢��͸����˿�Ĺ��ߣ����г�����һ��
���ɵ���Ϣ������ǧ�����ϵ����·��д����ĳ��֣����ⶴ�ĳ���Ҳ
��˵�������ˣ����������ĵش���͸��һ������Ĺ�ã��ԭ����һ��
����Ľ�(sword)�������档
LONG);
	set("exits", ([ /* sizeof() == 4 */
	"out"       : __DIR__"mon25",

]));
        set("item_desc",(["sword":
	"�����������ǰһ������һ�Ѵ���Ľ����������˲ʱ¶��̰����ɫ
�ģ��㲻����Ҫ�����γ�(pull)���������󴥻��ص��㣬���ǵ�С��
������ڽ�(sword)��������Ѱ(ssearch)һ����\n",
]));
	set("no_fight", 1);
	setup();
}

void init()
{
    add_action("search_sword", "ssearch");
    add_action("pull_sword","pull");
}

int search_sword(string arg)
{
	object me = this_player();
	object room = environment(me);

	if(!arg||arg!="sword")
	return notify_fail("��������ȥ�����Ҳ�������Ҫ�Ķ���!!\n");

	if(room->query_temp("mon/sword"))
	return notify_fail("�ƽ��Ѿ���ʧ��ֻʣһ�����Ĺ�Ӱͣ����ԭ����\n");

	if( (this_player()->query("combat_exp",1) < 1000000) )
	return notify_fail("Ҳ����������������Ҳ�������������λ�á�\n");

	if( room->query_temp("mon/search") == 1 )
	return notify_fail("һ������Ĺ�ã���������֣����㿴������ǰ��һ�С�\n");

	message_vision(HIY"һ��ͳ����������ƽ𽣾��ڿն��𣬾��������ڰ���С�\n"NOR,me);
	room->set_temp("mon/search",1);
	return 1;

}
int pull_sword(string arg)
{
	object me = this_player();
	object room = environment(me);

	if(!arg||arg!="sword")
	return notify_fail("�����ʲô����ѽ����\n");

	if( room->query_temp("mon/sword")==1 )
	return notify_fail("�ƽ��Ѿ���ʧ��ֻʣһ�����Ĺ�Ӱͣ����ԭ����\n");

	message_vision(HIY"�ƽ𽣷���һ��ҫ�۵Ĺ�ã�󣬾�Ȼ��ʧ�������У����������ȴ������ʧ��\n"NOR,me);
	tell_object(users(),HIW"һ����ɫ�Ĺ�âֱ͸��ʣ�����ɽ���Ͽ�ͻȻ����������һ�������Ԥ��ӿ������ͷ��\n"NOR);

	room->delete_temp("mon/search");
	room->set_temp("mon/sword",1);

	set("exits",([
	"enter"	:__DIR__"mon59",
	"out"	:__DIR__"mon25",
	]));

	call_out("close",720,me);
	return 1;

}

int close(object me)
{
	message_vision(YEL"��âɢȥ����ǰ��������ٶȱպ���ʧ�ˡ�\n"NOR,me);
	delete("exits/enter");
	return 1;
}

