#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ�������ŷ���"NOR);
  set ("long","����ռ�����һ��ϵͳ���ǰ��ɵ�ϵͳ(clans),����ҿ���
  ��help clans,��һ�°��ɵ�����!!���ɼ����ɵ���Ҫ��ͬ!!!���£�
  1.���������������ɵ�!!!����������ʦ(wizard)��������!!
  2.���ɿ���д�Լ������������ڡ����估���Է���ս��!!!
  3.������ɵĻ��õ��չ�Ҳ�Ƚ϶࣬���Ļ�ȽϿ�!!!
  4.Ҫ������ԵĻ�.�Ժ����Լ�Ҳ���Դ��Լ��İ���!!!
  ���磺help clans
    help creat_clan ��δ���һ�����ɡ�
    help clan_rank  ���ɵĽ׼��ƶȡ�
    help clan_money Ǯ����Ҫ�ԡ�
    help clan_cmds  ���ɵ�ָ��˵����
    help clan_room  ��ν����Լ��İ��ɡ�
    help clan_rules ���ɹ涨��
    help clan_war   ���ɵ�ս����
    help clan_boss  �������Ž�ѧ��
    help clan_tax   ����˰���ƶȡ�
    help clan_dev   ���ɷ�չ�ƶȡ�
    help clan_stat  ����״̬˵����

               \n");
  set("exits", ([
  "east" : __DIR__"newhand",
  "west" : __DIR__"newhand3-2",
               ]));
  set("light_up", 1);
  setup();
}

