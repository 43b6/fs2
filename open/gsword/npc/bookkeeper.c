#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  set_name("�ɽ����ϳ���", ({ "an old worker", "worker" }) );
        set("long","����һ������������ ,�����С���Ѿ������ɨ������\n");
        set("gender", "����" );
        set("class","swordsman");
        set("age", 75);
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
	set("force",100);
        set("max_gin",100);
        set("force_factor",3 );
        set("gin",100);
        set("max_kee",2000);
        set("kee",2000);
        set("max_mana",100);
        set("mana",100);
        set_skill("force",40);
        set_skill("dodge",60);
        map_skill("dodge","sha-steps");
        set_skill("sword",60);
        map_skill("force","shaforce"); 
        set_skill("unarmed",90);
        setup();
        }
 void init()
  { 
   add_action("do_search","search");
   add_action("do_answer","answer");
   }
  int do_search(string arg)
  {
   object who;
    who=this_player();
    if( !who->query_temp("allow_read",1))
       return notify_fail("����δ������������ ,�������Խ����ؾ��������� ,���ȥ!!\n");
    if( arg!="shelf")
      return 0;
    else
     {
     message_vision("�����ʵ� : ������ʲô ?? ���Ը���(answer)���� ??˵������
       ���԰���æ.\n",who);
      who->set_temp("have_search",1);
      return 1;      
     }
    }
  int do_answer(string arg)
   {
  object who;
    who=this_player();
    
    if(!who->query_temp("have_search",1))
      return notify_fail("������ʲô??\n");
    if( arg!="�ɽ�����")
     return notify_fail("����˵�� : �Ҳ��ܰ���æ ,���Ǳ�Ǹ��\n");
    else
     {
      message_vision("����˵...��˵������ë��������ɽ�֮��,�Ȿ����Ҳ�͸���ʧ����,
             �������汻��ң���Ʒ�֮��,ֻ�õ�һ�ѳ���֮��,������Ҳ��֪������.\n",who);
   return 1;
      who->delete_temp("have_search",1);
      who->set_temp("have_answer",1);
      } 
    }          
