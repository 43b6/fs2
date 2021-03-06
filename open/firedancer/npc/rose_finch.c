inherit NPC;
inherit SSERVER;
#include <ansi.h>

void create()
{
        set_name("朱雀",({"rose finch","finch"}));
	set("title",HIW"四 圣 兽 "NOR);
        set("race","野兽");
        set("limbs", ({ "头" , "身体" , "翅膀" , "爪" }));
        set("verbs", ({ "poke" , "claw" }));
        set("age",1350);
        set("combat_exp",9000000);
        set("str",30);
        set("cor",30);
        set("int",30);
        set("spi",30);
        set("cps",30);
        set("per",30);
        set("con",50);
        set("kar",50);
        set("attitude","aggressive");
        set("force_factor",20);
        set("max_gin",200000);
        set("max_kee",500000);
        set("max_sen",300000);
        set("gin",200000);
        set("kee",500000);
        set("sen",300000);
        set("max_force",700000);
        set("force",700000);
        set_skill("force",300);
        set_skill("unarmed",300);
        set_skill("parry",300);
        set_skill("dodge",300);
        set_skill("move",300);
        setup();
        carry_object(__DIR__"eq/r_armbands")->wear();
        carry_object(__DIR__"eq/r_belt")->wear();
        carry_object(__DIR__"eq/r_boots")->wear();
        carry_object(__DIR__"eq/r_cape")->wear();
        carry_object(__DIR__"eq/r_cloth")->wear();
        carry_object(__DIR__"eq/r_finger")->wear();
        carry_object(__DIR__"eq/r_hands")->wear();
        carry_object(__DIR__"eq/r_head")->wear();
        carry_object(__DIR__"eq/r_leg")->wear();
        carry_object(__DIR__"eq/r_neck")->wear();
        carry_object(__DIR__"eq/r_pants")->wear();
        carry_object(__DIR__"eq/r_shield")->wear();
        carry_object(__DIR__"eq/r_wrists")->wear();
}

void heart_beat()
{
object ob,env,me;
int i,j,k;

        ob = this_object();
        env = environment(ob);
        me = offensive_target(ob);

        if( !me )
                return ::heart_beat(1);

        if ( ob->query_condition() || ob->query_busy() )
        {
                message_vision(HIR"\n
朱雀的羽毛燃烧着熊熊火焰，朱雀一点也不显得痛苦!

火焰不断的燃烧!!等到整个躯体都被烧成枯\骨后，清脆的外壳纷纷碎裂!!

朱雀重生于枯\干的骨骸中!!
\n",ob);
                ob->clear_condition();
                ob->delete_busy();
                if( (int)ob->query("kee") < (int)ob->query("max_kee")/10 )
                {
                        ob->receive_curing("kee",10000);
                        ob->receive_heal("kee", 10000);
                }
                else if ( (int)ob->query("kee") < (int)ob->query("max_kee")/2 )
                {
                        ob->receive_curing("kee",1000);
                        ob->receive_heal("kee", 1000);
                }
        }

        if( env == environment(me) )
        {
                i = random(100);

                if( i < 5 )
                {
                        message_vision(HIR"\n
朱雀飞冲向天，飘落的羽毛贴附于$N身上!!

        朱      雀      -       朱      雀      魄

贴附的羽毛仿佛有生命的，不断吸取$N的内力，瞬间完全流逝!!
\n"NOR,me);
                        me->set("force",1);
                }
                else if( i < 25 )
                {
                        message_vision(HIR"\n
朱雀缓缓吐出一口真气，真气缓缓漂向$N!!

        朱      雀      -       朱      雀      息

气状的黏膜将$N包围住，$N动弹不得!!
\n"NOR,me);
                        me->start_busy(1);
                }
                else if( i < 50 )
                {
                        j = 500+random(500);
                        message_vision(HIR"\n
朱雀拍打着翅膀，一阵阵风压造成一段段的片面真空!!

        朱      雀      -       朱      雀      杀

真空瞬间割伤了$N，$N受到了"+j+"点的损伤!!
\n"NOR,me);
                        me->receive_wound("kee", j);
                        me->receive_damage("kee", j);
                }
                else
                {
                        k = random(2)+1;
                        message_vision(HIR"\n
朱雀伸出坚硬的爪，不断的向四周狂抓!!

        朱      雀      -       朱      雀      破      甲

$N急忙闪过，不过身上的防具还是被抓坏了，$N减低"+k+"点防御力!!\n
"NOR,me);
                        me->add_temp("apply/defense", -k);
                        
                }
        }
        set_heart_beat(1);
::heart_beat();
}

void die()
{
object ob,me;

        ob = this_object();
        me = ob->query_temp("last_damage_from");

        if( !me )
                ::die();

        message_vision(HIR"\n
朱雀移动渐渐缓慢，身体各处均有受伤，看来即将濒临死亡...

突然，朱雀分化两只!!其中一只行动极快，你简直无法看清楚它的身影!!

        [朱]    [雀]    -       [雀]    [焰]

不断移动的朱雀霎时冲向$N!!$N还来不及反应，朱雀已经消失在$N的眼前。
\n"NOR,me);
//      me->apply_condition("rose_finch",1);

	tell_object(users(),HIC"
	四 圣 兽 之 一 的 北 兽

		"HIR"朱	雀

	"HIC"被 "+me->name(1)+" 给打败了!!\n"NOR);

	write_file("/u/f/firedancer/log_file/"+me->query("id")+"",sprintf("%s(%s) 在 %s 打败了朱雀。\n",me->name(1),getuid(me),ctime(time()) ));
::die();
}
