#include <ansi.h>

inherit NPC;

void create()
{
      set_name("��������",({"ihinerant"}));
      set("long",@LONG
һ������һЩ��͵�����ʦ��������Դ������Ͽ������������µĺۼ���
����������ڴ˵ذ�̯���գ�ϣ����׬Щ����ѡ�
LONG
      );
      set("age",56);
      set("attitude","friendly");
      set("gender","����");

      set_skill("unarmed",35);
      set_skill("dodge",35);
      set_skill("parry",35);
      set("combat_bat",10000);

      set("chat_chance",3);
      set("chat_msg",({
          "�������˺����������������˵������˳�����Ǯ������Ǯ����\n",
          "�������˽е���С�ܳ����󱦵�....\n",
          "��������һ�����������˵��ϵ�����ש��\n",
      }) );

      setup();

      add_money("coin",10);
      carry_object("/obj/cloth")->wear();
}
