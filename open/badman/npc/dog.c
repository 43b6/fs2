#include <ansi.h>

inherit NPC;

void create()
{
      set("title","灵犬");
      set_name("大呆",({"dog"}));
      set("long","一只全身黝黑的大狼狗，今天和其主人一同出游，显得格外的兴奋。\n");
      set("race","野兽");
      set("attitude","peaceful");
      set("gender","雄性");
      set("age",5);
      set("limbs",({"头部","尾巴","前脚","后腿","身体"}));
      set("verbs",({"bite","claw"}));

      set_skill("unarmed",30);
      set_skill("dodge",25);
      set("combat_exp",5000);

      set("chat_chance",2);
      set("chat_msg",({
          "大呆用后腿抓了抓自己的耳朵。\n",
          "大呆在你的腿边嗅了嗅。\n",
          "大呆举起了后腿跨在你小腿上，撒了一泡尿。\n",
      }));

      setup();
}
