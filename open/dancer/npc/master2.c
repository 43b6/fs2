#include <ansi.h>
inherit NPC;
 
void create()
{
      set("title","����ׯ�ڶ�������");
      set_name("ˮ���",({"linr"}) );
      set("gender","Ů��");
      set("age",20);
      set("attitude","friendly");
      set("class","dancer");
      set_skill("unarmed",100);
      set_skill("dodge",100);
      set("combat_exp",9999990);
 
      set("chat_chance",1);
 
      set("inquiry",([
           "����" : "�������������ǩ���������ʦ��!!\n",
           "tide" : "tide=���£�do you know...?\n",
           "FS"   : "���㶼��֪�������������������ĸ�MUD��??\n",
           "ode"  : "�������µ�ʦ����!!���µı��¶������̵���!!\n",
           "wade" : "FS������!!��˵�������������Ү!!\n",
       ]));
 
      setup();
 
      carry_object("/obj/cloth")->wear();
}
 
void init()
{
      object me;
      ::init();
      if( interactive( me=this_player()) && !is_fighting() ) {
        if( me->query("id")=="lum" ) {
          write ("�ܻ���ϲ�����ۣ��������ˣ�ǩ����ǩ����\n");
        }
        if( me->query("id")=="lopo" ) {
          write ("�ܻ����м������ۣ��Ƿ���Ү....лл����ô�����¡�лл��\n");
          command("kiss "+me->query("id"));
        }
        if( me->query("id")=="oda" ) {
          write ("�ܻ�����������...�㲻��tide��ʦ��������������...\n");
          message_vision(HIC"�ܻ���ӯӯ����$N���˸�ͷ��˵�����Ҵ�tideлл�㡣\n"NOR,me);
          command("thank "+me->query("id"));
        }
        remove_call_out("greeting");                                                 remove_call_out("greeting");
        call_out("greeting",2,me);
      }
}
 
void greeting(object me)
{
      if( !me||environment(me)!=environment() ) return;
      switch ( random(3) ) {
      case 0:
      write("�ܻ����ʵ�����Ҳ����������ǩ�����𣿻�����ɶ�¡�\n");break;
      case 1:
      write("�ܻ���˵������������ร������������ʱ�����ǵ�һ����ǩ����ม�\n");
      break;
      case 2:
      write("�ܻ���ϲ������������ʶ�㣬��Ҳ��FS����ʦ�ǩ����ǩ����\n");
      break;
      }
}
