inherit NPC;
#include <ansi.h>

void create()
{
set_name("������", ({ "accounter"}));
        set("title", "����ʦү");
        set("gender", "����" );
        set("nickname","[1;33m��������[0m");
        set("age", 46);
        set("str", 50);
        set("cor", 50);
        set("cps", 50);
        set("int", 50);
        set("spi", 50);
        set("kar", 50);
        set("per", 50);
        set("con", 50);

        set("max_atman", 5000);
        set("max_force", 5000);
        set("max_mana", 5000);
        set("atman", 5000);
        set("force", 5000);
        set("mana", 5000);
        set("force_factor", 5);

        set("long", @LONG
    �޳����˵ĵ������֣����Ŷ����˵ĸ߷����ڷ緶����˵��Ҳ�Ǹ�
��ز�¶�ĸ��֣���֪�����Ƿ�ȷʵ??����������ȷ���˰��ղ��ٵ�æ
ƽ������Ҳ�ܾ���֮��
LONG);

        set("combat_exp", 20000);
        set("score", 30000);

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
        "ԩԩ�౨��ʱ�ˡ���\n",
        "��Ҫ����ν�������˰�!!\n"
        }) );

        set_skill("unarmed", 60);
        set_skill("force", 100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
        set_skill("sword", 100);
        set_skill("literate", 90);

        set("inquiry", ([
          "���޳�" : "ม��������޳������! ���Ǻù��!!",
	  "thief"  : "��..��������ɰ������޳����˸�������, �����϶�֪����, ��..",
	]) );

        setup();
        carry_object(__DIR__"obj/o_cloth")->wear();
}
