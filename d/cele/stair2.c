inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ��ʯ����");
  set ("long", @LONG
    ������������һ�������İ�ʯ�����ϣ���Щ������ݵİ�ʯ������
����������ƿɽ������˵��н�ǧ��֮ң��������Ȼ�����Զ����Ȼ��
�Կ��ó����õ�ȫ������Ʒ����õġ�����ʯ���ɼ���������˱ض�
������ͷ��

LONG);

  set("outdoors", "cele");
  set("exits", ([ /* sizeof() == 1 */
  "northup"  : "/d/cele/stairtop",
  "southdown": "/d/cele/stair1",
 ]));

  setup();
}
