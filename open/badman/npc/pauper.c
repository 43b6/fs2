#include </open/open.h>
#include <ansi.h>

inherit NPC;

void create()
{
      set_name("��ؤ",({"pauper"}) );
      set("long",@LONG
һ���������ڵ���ؤ���ؽ������������š�����ƺ���ֻ��ئ��ͷ������ȴ����һֻ
����(crutch)����ͻȻ����һ����Ī��...
LONG
      );
      set("age",32);
      set("attitude","friendly");
      set("gender","����");

      set_skill("unarmed",30);
      set_skill("dodge",30);
      set_skill("parry",30);
      set("combat_exp",450);

      set("inquiry",([
          "����" : "�㲻����Ǯ����ˣ���������\n",
          "crutch" : "����ôϲ������һ���ƽ𣬲�Ҫ������\n",
          "ä����" : "��...�Ҳ�֪��������ɶ����\n",
      ]) );

      set("chat_chance",2);
      set("chat_msg",({
          (:random_move:),
          "��ؤ����������½ǣ��������֡�\n",
          "��ؤ˵�������ĵ���ү������\n",
      }) );

      setup();

      carry_object("/obj/cloth")->wear();
}

int accept_object(object me,object ob)
{
      object crutch;
      me=this_player();
      if( ob->value()>=10000 ) {
            tell_object(me,"��ؤϲ����������ô��Ǯ��Ҫʮֻ����Ҳ�����ˡ�\n");
            message_vision("��ؤ�ø�$Nһ�����ȡ�\n",me);
            crutch = new(BAD_OBJ"crutch");
            crutch -> move(me);
            tell_object(me,"��ؤ�����˵���´��������ʱ���ǵ����Ұ�������\n");
            return 1;
      }
      else
      return notify_fail("��ؤ�ӵ���ι�����У����Ǯ�Ĺ������г�����\n");
}
