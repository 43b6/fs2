#include <ansi.h>
inherit NPC;
string ask_oldman();
void create ()
{
        set_name("����",({"old man","man","old"}) );
        set("gender","����");
        set("age",74);
        set("long","һ�������ұڵؽ��ڵ�������, �������ϳ��������(�ǰ�)��, 
�ƺ�Ҳ������������·�ϵ���ؤ�к�����!!\n");
	set("inquiry",([
	"�ǰ�":"����(�����ħ)�Ľ���, �ǰ߻����ҵ�\����ȫ����ʧ...",
	"�����ħ":(:ask_oldman:),
	]));
	set("chat_chance",1);
	set("chat_msg",({
	HIY"����ͻȻ�����ĺ���:��ɷ�������ħ!! ˭�ܰ��ұ���...����..\n"NOR,
	HIW"�����ƿ���Ц�ı���, ����ʮ�ֵ�ʧ��...\n"NOR,
	}));
	setup();
}

string ask_oldman()
{
object me;
me=this_player();
if(me->query_temp("ghost-hole/agree-kill-ghost",1))
return "���˸��˵�Ц��:̫����,���ڴ���������ĺ���Ϣ!!";
me->set_temp("ghost-hole/ask_oldman",1);
return "����˵��:�����ƹܴ˵ص�ħ��, ʮ�ֵ�ǿ��, ��Ը����ұ�����?";
}

void init()
{
add_action("do_nod","nod");
}

int do_nod(string arg)
{
object me=this_player();
if(!arg||arg!="man")
return 0;
if(me->query_temp("ghost-hole/ask_oldman")!=1)
{
message_vision(HIY"$N�����˵�ͷ, ����Ͷ�Ի��ɵ��۹⿴��$N\n"NOR,me);
return notify_fail("����ҵ�ͷ��ʲô?");
}
message_vision(HIY"$N��ͷ��Ӧ�����˵�Ҫ��!!\n"NOR,me);
message_vision(HIY"����Ц��:̫����, �������������һ��\���������ͳ�����!!\n"NOR,me);
me->move("/open/ghost-hole/g-h04");
message_vision(HIW"�ռ�ͻȻ������һ���ѷ�, $N���ѷ��������...\n"NOR,me);
return 1;
}
