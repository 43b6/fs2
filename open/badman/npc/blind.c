#include </open/open.h>
#include <ansi.h>

inherit NPC;

void greeting(object me);

void create()
{
      set_name("ä����",({"blind person","blind","person"}) );
      set("long",@LONG
һ������ʧ�����ˣ�������ʧ��ʲô��������ãȻ��վ�ڽ�ͷ���ƺ��ȴ���
���Э��(help)��
LONG
      );
      set("age",40);
      set("gender","����");
      set("attitude","friendly");

      set_skill("dodge",20);
      set_skill("unarmed",10);
      set_skill("parry",20);
      set("combat_exp",300);

      set("chat_chance",1);
      set("chat_msg",({
          "ä��������󺹵Ķ��ڵ����������ƺ�����Ѱʲô��\n",
          "ä�����������˵�������ˡ����ˣ�Ҫ��ô��źã�\n",
      }) );

      set("inquiry",([
          "Э��" : "��...���ܰ����һ��ҵĹ�����?\n",
          "help" : "�ҵĹ���Ū���ˣ����ܰ�������\n",
          "����" : "�Ҹող�֪��˭��ײ����һײ�����ȱ㲻���ˡ�\n",
      ]) );

      setup();

      carry_object("/obj/cloth")->wear();
      add_money("coin",20);
}

void init()
{
      object me;
      ::init();
      if( interactive( me=this_player() ) && !is_fighting() ) {
            remove_call_out("greeting");
            call_out("greeting",1,me);
      }
}

void greeting(object me)
{
      if( !me||environment(me)!=environment() ) return;
      else
      say ("ä�����ʵ�����...�����Ƿ��ܰ�С��һ��æ��\n");
}

int accept_object(object me,object ob)
{
      object mask;
      me=this_player();
      if( ob->query("id")=="crutch" ) {
            tell_object(me,
            "ä��ϲ�����������ҵĹ���û����л��������л��С�����Իر�...\n");
            message_vision("ä�������ֵ�������������\n", me);
            tell_object(me,
            "ä��ϲ������...���ˣ������������ҵ�һ�����⣬������°ɣ�\n");
            message_vision("ä�����ó���һ�����£�������$N�����С�\n",me);
            mask = new(BAD_OBJ"mask");
            mask -> move(me);
            tell_object(me,
            "ä��˵���������ⶫ����Ҳ�ò��������͸������ˡ��������ˣ���������ǡ�\n");
            destruct(this_object());
            return 1;
      }
      else
      return notify_fail("ä�˿�Ц�������¾ͱ���ҿ���Ц�˰ɣ�\n");
}
