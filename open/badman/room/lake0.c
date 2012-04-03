// Room: /open/badman/room/lake0.c
// written by powell 96.4.26@FS

#include <ansi.h>
#include </open/open.h>

inherit ROOM;

void create ()
{
  set ("short", "���˺�");
  set ("long", @LONG
����һ����������صĺ�����һ�ɺ�������ӿ������ͷ������
����Ϊ���˺�����ȴû�ж��˹ȵ��Ƿ�а��֮��������������е�
�й���ʥ�����ַ��ĸо����������Ƕ�������ƶ�ͷ���б���
�����ǲ��ܲ����õ�!

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"forest16.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "lake" : "һ���峺�ĺ�����Ҳ������Ǳ(dive)��ȥ���ơ�\n",
]));
  set("outdoors", "/open/badman");
  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}

    void init()
{
// �ȹص�, �Ժ�Ҫд����ʱ�ٿ�
//	add_action("do_pray","pray");
	add_action("do_dive","dive");
}

int do_pray()
{
	object who;
	who = this_player();
	if (who->query_temp("pray_god") == 1) 
	tell_object(who,"\n������۾�����ʼ��........\n"+
		       	  "............................\n"+
                          "����������ˮһ���ƽ���������ô��Ҳû������\n");
	else {
	tell_object(who,"\nͻȻ���㷢�ֶ��˺��ĺ�ˮ����ڰ�ؿ�ʼð����������\n
                         \n\nȻ������ǰ���һ�������������������۾�....\n
                 "HIY"\n��������������������������������������������������\n
                 "CYN"\r     ˮ�����Ķ���˵����\n
                      \r     ����Ҫ�Ұ�æ�ĵط���?\n
                 "HIY"\r��������������������������������������������������\n
                 "NOR"         
                 \n");
	new(BAD_NPC"watergod.c")->move(this_object());
	who->set_temp("pray_god",1);
	}
	return 1;
}

int do_dive()
{
	object who;
        who = this_player();
        tell_object(who,"\n������һ�������������У������Ǳ����ȥ��\n\n");
	who->move(__DIR__"lake1");
	return 1;
}

