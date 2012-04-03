#include <ansi.h>
inherit ROOM;
string statue();
void create ()
{
  set ("short", "���ϲ�");
  set ("long", @LONG
�������ߣ���һ������ĺ�������������Ŷ�ˮ�������������
����ˮ����ȥ�����������û�����õ������Ļ������޷�����ǿ���ˮѹ��
�á�
�ڶϲ�ǰ��һ����ֵ�����(statue)���Լ�һ����־(sign)��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/killer/sea/room/landrm1.c",
  "westdown" : __DIR__"sea02",
]));
  set("item_desc", ([ /* sizeof() == 2 */
  "statue" : (: statue :),
  "sign" : "���Ǳ���޴����㣬�����Ҵ���
",
]));

  setup();
}
int valid_leave(object me,string dir)
{
int sk;
me=this_player();
sk=me->query_skill("force");
if(dir=="westdown")
{
if(sk<50)
{
me->start_busy(2);
tell_object(me,HIW"һ��ǿ���ѹ��ʹ�����޷�������\n"NOR);
call_out("sea01",2,me);
return 1;
}
else
{
message_vision(HIY"$N����ǿ���������ʹ��ˮѹ������ѹ������\n"NOR,me);
me->add("force",-100);
return 1;
}
}
if(dir=="east")
{
return 1;
}
}
int sea01(object me)
{
me=this_player();
if (me->query_temp("put_water")!=1)
{
tell_object(me,HIB"\n\n���ڶ�ˮ���������ʧ�ˣ�һ˲��ǿ���ˮѹ���㼷��ˮ�棡\n\n"NOR);
me->move(__DIR__"sea01");
}
else
{
tell_object(me,HIY"��ˮ������������ֶ���������\n"NOR);
me->add("force",-100);
COMBAT_D->report_status(me,1);
}
}
string statue()
{
object me;
me=this_player();
if(!present("static_water",me))
return "һ�����δ�����ĵ���ʮ�ֵĹ��죬����Ŀ��ת���Ŀ��š�\n";
if(me->query_temp("put_water")!=1)
{
if(me->query_temp("look_statue")!=1)
{
me->set_temp("look_statue",1);
call_out("move01",1,me);
return "һ�����δ�����ĵ���ʮ�ֵĹ��죬����Ŀ��ת���Ŀ��š�\n";
}
return "һ�����δ�����ĵ���ʮ�ֵĹ��죬����Ŀ��ת���Ŀ��š�\n";
}
else
return "һ�����δ�����ĵ���ʮ�ֵĹ��죬����Ŀ��ת���Ŀ��š�\n";
}
int move01(object me)
{
message_vision(HIB"\n\n$Nɵɵ�Ŀ��ŵ���\n"NOR,me);
me->start_busy(5);
call_out("move02",2,me);
return 1;
}
int move02(object me)
{
message_vision(HIB"\n\n�����ƺ��������ſ����۾���\n"NOR,me);
call_out("move03",3,me);
return 1;
}
int move03(object me)
{
message_vision(HIY"\n\nһ˲�䣬����������˫�۰�$N�����˽�ȥ����\n"NOR,me);
me->move(__DIR__"statueroom");
me->delete_temp("look_statue");
return 1;
}
