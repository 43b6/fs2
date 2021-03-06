// move.c

//#pragma optimize
#pragma save_binary

#include <dbase.h>
#include <type.h>

static int weight = 0, encumb = 0, max_encumb = 0;

nomask int weight() { return weight + encumb; }
nomask int query_weight() { return weight; }
nomask int query_encumbrance() { return encumb; }
nomask int over_encumbranced() { return encumb > max_encumb; }
nomask int query_max_encumbrance() { return max_encumb; }
nomask void set_max_encumbrance(int e) { max_encumb = e; }

nomask void add_encumbrance(int w)
{
        encumb += w;
        if( encumb < 0 )
                log_file("move.bug", sprintf("%O encumbrance underflow.\n", this_object()));
        if( encumb > max_encumb ) this_object()->over_encumbrance();
        if( environment() ) environment()->add_encumbrance(w);
}

void over_encumbrance()
{
        if( !interactive(this_object()) ) return;
        tell_object(this_object(), "你的负荷过重了！\n");
}

nomask void set_weight(int w)
{
        if( !environment() ) {
                weight = w;
                return;
        }
        if( w!=weight ) environment()->add_encumbrance( w - weight );
        weight = w;
}

varargs int move(mixed dest, int silently)
{
        mixed err;
        object ob;

	if (query_temp("no_move"))
	  return notify_fail ("你被限制不能移动，如果有问题，请告诉巫师..\n");

        // If we are equipped, unequip first.
        if( query("equipped") && !this_object()->unequip() )
                return notify_fail("你没有办法取下这样东西。\n");

        // Find the destination ob for moving.
        switch( typeof(dest) )
        {
                case OBJECT :
                        ob = dest;
                        break;
                case STRING :
                        if( err = catch(ob = load_object(dest) ) )
                                error( "move : error loading " + dest + ":\n" + err );
                        break;
                default :
                        error( sprintf("move : Invalid destination. Expected: object or string, Got: %O.\n", dest ));
                        break;
        }

/*      下面这段在 call_other 那边, 如果无法载入的话就话出错
        改成上面的方式, 顺便最佳化                              Arthur
        if( objectp(dest) )
                ob = dest;
        else if( stringp(dest) ) {
                call_other(dest, "???");
                ob = find_object(dest);
                if(!ob) return notify_fail("move: 目标房间不存在.\n");
        } else
                return notify_fail("move: 目标应该是房间的档名.\n");
*/
        // Check if the destination ob can hold this object.
        if( (int)ob->query_encumbrance() + weight()
                > (int)ob->query_max_encumbrance() ) {
                if( ob==this_player() )
                        return notify_fail( this_object()->name() + "对你而言太重了。\n");
                else
                        return notify_fail( this_object()->name() + "对" + ob->name() + "而言太重了。\n");
        }

        // Move the object and update encumbrance
        if( environment() ) {
          environment()->add_encumbrance( - weight());
          this_object()->set("last_location", file_name(environment()));
        }
        move_object(ob);
        ob->add_encumbrance(weight());

        // If we are players, try look where we are.
        if( interactive(this_object())          // are we linkdead?
        &&      living(this_object()))          // are we still concious?
        {
                if (silently<=0)
                        command("look");
        }

        return 1;
}

void remove(string euid)
{
        object default_ob;

        if( !previous_object()
        ||      base_name(previous_object()) != SIMUL_EFUN_OB )
                error("move: remove() can only be called by destruct() simul efun.\n");

        if( userp(this_object()) && euid!=ROOT_UID ) {
                log_file("destruct", sprintf("%s attempt to destruct user object %s (%s)\n",
                        euid, this_object()->query("id"), ctime(time())));
                error("你(" + euid + ")不能摧毁其他的使用者。\n");
        } else if( this_object()->query("equipped")) {
                if(     !this_object()->unequip() )
                        log_file("destruct", sprintf("Failed to unequip %s when destructed.\n",file_name(this_object())));
        }

        // We only care about our own weight here, since remove() is called once
        // on each destruct(), so our inventory (encumbrance) will be counted as
        // well.
        if( environment() )     environment()->add_encumbrance( - weight );
        if( default_ob = this_object()->query_default_object() )
                default_ob->add("no_clean_up", -1);
}

int move_or_destruct( object dest )
{
        if( userp(this_object()) ) {
                tell_object(this_object(), "一阵时空的扭曲将你传送到另一个地方....\n");
                move(VOID_OB);
        }
}
