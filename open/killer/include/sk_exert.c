//Copy from /std/skill.c
inherit F_CLEAN_UP;

void create()
{
        seteuid(getuid());
}             
int valid_learn(object me) { return 1; }

int valid_effect(object me, object weapon, string action_name, int skill)
{
        return 1;
} 
string type() { return "martial"; }   

int exert_function(object me, string arg)
{
        string func, target, file;
        object target_ob;

        if( sscanf(arg, "%s %s", func, target)==2 )
        {
         if( target_ob = present(target, environment(me)) ) {
                  target_ob = present(target, environment(me)); }
         else { target_ob = present(target, me); }
          if( !target_ob )
            return notify_fail("����û�� " + target + "��\n");
          if(in_edit(target_ob) || in_input(target_ob) || target_ob->query_temp(
"netdead"))
            return notify_fail ("�޷���"+target_ob->query("name")+"������\n");
        }
        else {
                func = arg;
                target_ob = me;
        }
        if( !stringp(file=(string)this_object()->exert_function_file(func))
        ||      file_size(file + ".c") <= 0 )   
                return 0;

        return (int)call_other( file, "exert", me, target_ob);
}   
