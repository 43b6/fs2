// room1.c by roger

inherit ROOM;
#include <ansi.h>
#include <mountain.msg>
void create () {
set ("short","��󸶴��");
set ("long","
����������Ǵ�˵��ǧ����Ķ�Ѩ�ˡ���˵��ǧ�������������
ʳ���ǽ�ʳʱ���ѵ�������ÿ�������ɢ���Ķ����ض�����һ���ȷ�
Ѫ�ꡣ�����Ȼ����̸ǧ����Ϊ֮ɫ�䣬����®ɽ����Ŀȴ����û
��֪������Ϊ���Ǽ��������˲��ǵ�����ΪŧѪ���ǳ���������֮��
������Ȼֻ���ڶ��ڣ������������֮�����Ѿ�ʹ��е�����ͷ�Ρ�
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"hole",
       "down" : __DIR__"room29",
       "enter" : "/open/gsword/room1/blood1/r1.c",
      ]));
        setup();
}
int valid_leave(object me, string dir)
{
 string three_leaf;
  if(dir=="north" && !present("three_leaf",me)){
 tell_object(me,"������İ��ˣ���ĸ��������Ը�����Ǽ���һ̲ŧѪ��?\n"); 
  return 0;
                                               }
  if(dir=="north" && present("three_leaf",me)){
 tell_object(me,"��������Ҷ������ɢ����������ʹ����ǿ�ܿ��ܶ�������Ϯ\n");
  return 1;
                                              }
  if(dir=="enter" && me->query("bloodsword")<2){
 tell_object(me,"������İ��ˣ���ĸ��������Ը�����Ǽ���һ�������Ļ���?\n");
 return 0;
}
  if(dir=="enter" && me->query("bloodsword")>=2){
 tell_object(me,"��ƾ�����ϵ�ħ��..һ�������߽�Ѫħ����..\n");
 return 1;
}
  return 1;
}
