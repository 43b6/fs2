inherit ROOM;
#include <ansi.h>
string out();
void create ()
{
  set ("short", "�̴���");
  set ("long", @LONG
����İ���ʮ�ֵļ򵥣����˼��Ź̶���˫��ľ���⣬����
����˵����һ���ˣ���ÿһ��ľ���ԣ�����һ����������������
Բ�β������������͸��������������(out)�ľ���
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "out" : (: out :),
]));
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/shipm.c" : 3,
  __DIR__"npc/son.c" : 1,
]));
  set("light_up", 1);

  setup();
}

string out()
{
 object ob;
 object me;
 ob=this_object();
 me=this_player();
 if (me->query_temp("lookout") != 1)
 {
 tell_object(me,HIY"����Զ����ȥ ,ֻ���̴����������ں��� ,������������ ,��ƽ�˾� ,����е�ʮ�����."NOR);
 me->set_temp("lookout",1);
 call_out("out_01",10,me);
 return "\n";
 }
 else return "û����ɶ�ر�Ķ���\n";
}
int out_01(object me)
{
tell_object(me,HIR"\n����������ͻȻת�� ,���ҹ�����!!\n"NOR);
call_out("out_02",2,me);
return 1;
}
int out_02(object me)
{
tell_object(me,HIR"\n�����ϵ���Խ��Խ�� ,��ҲԽ��Խǿ!!\n"NOR);
call_out("out_03",2,me);
return 1;
}
int out_03(object me)
{
tell_object(me,HIY"\n�װ��ϵĴ�Ա�ر� :����̫ǿ ,��ֻ�Ѿ�ʧ��ƫ�뺽����!!\n"NOR);
call_out("out_04",2,me);
return 1;
}
int out_04(object me)
{
tell_object(me,HIY"\n��....ϣ������ӵ������ܸϿ��ȥ....\n"NOR);
call_out("out_05",2,me);
return 1;
}
int out_05(object me)
{
tell_object(me,HIW"\n��ֻ�ں����Ͼ��ҵ�ҡ���� ,��Ա����ʼ�����δ�������....\n"NOR);
call_out("out_06",2,me);
return 1;
}
int out_06(object me)
{
tell_object(me,HIR"\nͻȻ��¡һ�� ,��ֻ�ƺ�ײ����ʲô���� .\n"NOR);
call_out("out_07",2,me);
return 1;
}
int out_07(object me)
{
tell_object(me,HIY"\nһλ��Ա�ر� :�������ڸ�ǳ��һ��С���� ,��������һ���� ,���ǵøϿ��Ƚ���Ʒ�˳�����!!\n"NOR);
call_out("out_08",1,me);
return 1;
}
int out_08(object me)
{
me->move("/open/killer/island/is4.c"); 
return 1;
}

