#include <room.h>

inherit ROOM;

void create()
{
             set("short","�ؾ���");
          set("long",@LONG
������ѩ���ɵĲؾ����������ŵĶ���ѩ�Ե����ţ�����
һ��ĵ��ӣ�û��������׼���ǲ��ö��������ģ����ſ���
һ�Ųؾ���Ĳ����(list)��ֻ�о�������׼����˲����ڴ���
������Ĳ��顣
LONG);
        set("exits", ([
                "west":__DIR__"room6",
        ]) );
        set("light_up",1);
        set("objects",([
        "/open/snow/obj/book":1,
        ]));
        setup();
}
void init()
{
      add_action("do_list","list");
     add_action("do_study","read");
}
int do_list()
{
    object me=this_player();
    tell_object(me,@LONG
  ����Ĳ����У�
      ѩ����¼ (Snow book)
      ����Ӱ������ (feet book)
      ��Ҷ�з�¼ (star book)
      ѩӰ��ָ(ice-fingers)
      ��˪���(snow-powerup)
LONG);
   return 1;
}
int do_study(string str)
{
   object me=this_player();
   string in_skill;
   int amount;
   if(this_player()->query("allow_study")!=1)
          return notify_fail("�㲻���Ҷ�������顣\n");
   if(str=="snow book") { in_skill="quests/read_snow"; amount=1; }
   if(str=="feet book") { in_skill="quests/read_snow"; amount=2; }
   if(str=="star book") { in_skill="quests/read_snow"; amount=3; }
   if(str=="ice-finger") {
      tell_object(me,@LONG
ѩӰ��ָ����ѩ����ѧ����߾��磬����ѩӰ��ָ�ߣ��������
�ɿ�������������ת����ǿ��֮������ѩ��������������ֻ�а��ˣ�
�˰��˽��������֣���Ϊһ�����֣�ȫ����׫����֮�⣬��������ѩ
����ѧ����֮����
 
  
                                      ѩ���ɵ��Ĵ�  ��ȫ��
LONG);
            return 1;
      }
     if(str=="snow-powerup")
       {
          tell_object(me,@LONG
��˪�������ѩ�Ի�������֮��ѧ���书���߿ɽ��������ᣬת��
���������ھ�������������֮��ѧ��Ҳ����ѧ��֮һ��ͻ�ƣ���Ϊ
��ȫ��������ʥ���п�˼һ�����������ѩӰ��ָ���Ϊ��������
��һָ�ľ�ѧ��
   
                                ѩ���ɵ��Ĵ�  ��ȫ��
LONG); 
        return 1;
       }
     if(me->query("quests/read_snow")>=1)
    {
        tell_object(me,"���Ѿ��ж������������е�һ�����Ѳ�׼�ٶ���\n");
        return 1;
    }
    tell_object(me,"���ж�֮��ʹ�����ѧ����������\n");
    if(in_skill)
    {
    me->set(in_skill,amount);
    me->set("title","ѩ�Ծ�ѧ����");
    }
   return 1;
}
