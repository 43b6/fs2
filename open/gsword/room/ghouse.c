// Room: /open/su/room/suroad9_1.c

inherit ROOM;

void create ()
{
  set ("short", "�ɽ��ɴ��");
  set ("long", @LONG
	
�����ɽ��ɵĴ��,������λ��ʿ������վ������,������ĳ���
,ȫ����̴ľ��ɣ�����һ��׳��,ȴ��һ��Ī����Ӣ����Ψһ����
�����Ǵ�������˵�λ���ϣ�ȴ����������--����ң���������ϡ�
���������ʦ�Ļ�ֻ���������ҵĽ�ʿ���ˡ�         

LONG);

  set("light_up",1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/north",
  "out" : "/open/gsword/room/test.c",
]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/swordsman" : 2,
  "/open/gsword/mob/chenfon.c" : 1,
]));

  setup();
}
