// Room: /open/badman/room/lake1.c
// written by powell 96.4.26@FS

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�����Ƕ��˺��У���ˮ�����ĺܣ���֪����ôԭ�����ˮ��
�������������ı��峹������һ�����ֵ�������������ܿ���Ψ
һ�����࣬��ֻ�в��㣬��˵�������������и�������£�����
����񻹿�����Ǳ��ȥ���Ƕ��������е�谵���ƺ�����ôΣ�մ�
�ڣ�������ҪǱ��ȥ��������ϰ��������������ɣ��ɱ�������
������...

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"lake0",
]));

  setup();
}

void init()
{
	add_action("do_dive","dive");
}

int do_dive()
{
        object who;
        who = this_player();
        tell_object(who,"\n������һ�����������Ǳ����ȥ��\n\n");
        who->move(__DIR__"lake2");
        return 1;
}
