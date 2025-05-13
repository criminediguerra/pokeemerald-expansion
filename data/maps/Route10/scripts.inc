Route10_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
	.byte 0

Route10_OnTransition:
	setflag FLAG_VISITED_ROUTE10
	end

Route_10_RockTunnelSign::
	msgbox Route_10_RockTunnelSignText, MSGBOX_SIGN
	end

Route_10_RockTunnelSignText:
	.string "ROCK TUNNEL\n"
	.string "Detour to LAVENDER TOWN$"

Route_10_RockTunnelSign1::
	msgbox Route_10_RockTunnelSign1Text, MSGBOX_SIGN
	end

Route_10_RockTunnelSign1Text:
	.string "ROCK TUNNEL$"