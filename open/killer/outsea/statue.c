inherit NPC;
#include <ansi.h>
string trouble();
void create()
{
set_name("������",({"sea-god man","man","god"}));
set("long","������ͨ����孵ĺ�����̬����һ�����������ӣ�
�����ƺ�������һЩ�鷳��");
set("age",1000);
set("inquiry",([
"�鷳":(:trouble:),
]));
setup();
}
int accept_fight(object me)
{
me=this_player();
command("pat "+me->query("id"));
command("say ���ӣ���Ҫ��ô�嶯����ɱ���ң���ͳ���ȥ�ˡ�");
command("smile");
return 0;
}
int accept_kill(object me)
{
me=this_player();
command("pat "+me->query("id"));
command("say ���ӣ���Ҫ��ô�嶯����ɱ���ң���ͳ���ȥ�ˡ�");
command("smile");
return 0;
}
string trouble()
{
object me;
me=this_player();
if(me->query_temp("put_water")!=1)
{
command("sigh");
call_out("help01",1,me);
return "��ʵ��������....\n";
}
else
{
command("smile");
command("say лл��Ѷ�ˮ���һ�����");
message_vision("��������һ�ӣ�$N����䷿����ʧ�ˡ�\n",me);
me->move(__DIR__"sea01");
return HIY"�Ǻ�...�һ��ö�ˮ��������������\n"NOR;
}
}
int help01(object me)
{
command("say ��ǰ���죬�Ҳ�С�İѵ���Ķ�ˮ��㶪��...����...\n");
return 1;
}
int accept_object(object me,object ob)
{
me=this_player();
if(ob->query("id")!="static_water")
command("say ��Ҫ���Ƕ�ˮ��....@#$%");
else
{
command("say ����̫���ˣ�лл��Ѷ�ˮ���һ�����");
call_out("help02",1,me);
}
}
int help02(object me)
{
message_vision("�����ϻ������������\n",me);
call_out("help03",3,me);
return 1;
}
int help03(object me)
{
message_vision("������������$N���Ķ�ˮ�飬�Ѷ�ˮ��װ���˵����ڡ�\n",me);
message_vision("������һ��ζ���$N����䷿����ʧ�ˡ�\n",me);
me->move(__DIR__"sea01");
tell_object(me,HIY"��������ǧ�ﴫ������˵���Ǻ�...�һ��ö�ˮ��������������\n"NOR);
call_out("time",1,me);
return 1;
}
int time(object me)
{
me->set_temp("put_water",1);
message_vision(HIB"$N�������ƺ�ɢ�������⡣\n"NOR,me);
tell_object(me,HIW"(����ʮ���ӵ�ʱ���ܵ���ˮ��ı�����)\n"NOR);
call_out("timeout",600,me);
return 1;
}
int timeout(object me)
{
me->delete_temp("put_water");
tell_object(me,HIW"��ˮ�������ʧЧ�ˡ�"NOR);
message_vision(HIR"$N�����ϵ����⽥����ȥ��\n"NOR,me);
return 1;
}
