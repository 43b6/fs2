// security.c

inherit SKILL;

int valid_enable(string usage) { return usage=="plan"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
   return notify_fail("诸葛神算只能用学的。\n");
}


string perform_action_file( string action )
{
if( this_player()->query("race") !="人类" )


   {
      tell_object( this_player(), "你不是儒门,怎么用诸葛神算???\n");
      action= "null_plan";
   }
   return CLASS_D("scholar") + "/god-plan/" + action;
}

