// Room: /open/gsword/room/g5-1.c
inherit ROOM;

void create ()
{
  set ("short", "�ɽ���������");
  set ("long", @LONG
����������½�ʿ�ܱ���������һ��̫ʦ�Σ�һ���׷������������
�������ϡ�����������λ���ɽ����У��������ǽ�ʿ��������ڣ����װ
諵Ľ�ڻԻƣ������������ɽ���������ֻ����������𣬷����ķ�����
���������ɽ������𣬽�����Ϊ��ѧ��������������ҲٲȻ��Ϊ�����ܲ�
����������и�����(sign)����ߵ�ǽ�Ϲ���һ����Ƥ(paper) д��
�ɽ������ļ�顣
 
LONG);
  set("item_desc", ([ /* sizeof() == 2 */
  "sign" : "������д��:
��������˽�ʿ���������� ,�����������紦�ͽ����� ,���ܲ�ˡ������ .\n",
 "paper" :" ��֪�ɽ���ѧ�������help shasword\n",
  ]));
  set("exits",([ /* sizeof() == 5 */
  "up" : "/open/gsword/room/eqroom.c",
  "west" : "/open/gsword/room/g4-10.c",
  "south" : "/open/gsword/room/g4-2",
  "north" : "/open/gsword/room/g5-2.c",
  "east" : "/open/gsword/room/g5-8.c",
]));

  set("light_up", 1);

  set("no_fight", 0);

  set("objects", ([ /* sizeof() == 1 */
   "/daemon/class/swordsman/master" :1,
]));

   set("valid_startroom", 1);

  setup();
  call_other("/obj/board/swordsman_b","????");
}

 int valid_leave(object me, string dir)
{
if( dir=="up" )
if( me->query("family/family_name")!="�ɽ���"
	&& !wizardp(me) )
   return notify_fail("ֻ���ɽ���ͽ���ܽ���\n");
return ::valid_leave(me,dir);
 }
