#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ���ʷ��չ��"NOR);
  set( "long", "������˵Lum���ҲҪ�������!!���Ծ��ְѴ����λ�ý�������һ
�ε�konn���,����һ��ʱ��,��ʱ��konn���������¿���Ҳ����һ��¥
����konn�������һЩ˽�˵�����!!��������Urd��������ֿ���ռ��
��չ������������Urd���˵��һ��������ʱWade��������Ϊ��,Ҫ�ô��
����������ͽ�����passwd����վ�ĸ�һЩWiz,������˵���˸���passwd
ʹ����ʱ��������һƬ����֮��,������˵Wade������������˻���!!!
" );
  set("exits", ([
  "north" : __DIR__"newhand6-4",
  "south" : __DIR__"newhand6-6",
               ]));
  set("light_up", 1);
  setup();
}

