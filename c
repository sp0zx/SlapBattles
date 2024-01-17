
local Players = game.Players
local Plr = Players.LocalPlayer
local Backpack = Plr.Backpack
local char = Plr.Character
local mouse = Plr:GetMouse()
local replicatedStorage = game:GetService("ReplicatedStorage")
local cooldown = false
--//boombox\\--
local function boombox(Method, id)
local backpack = Plr.Backpack
local boombox = backpack:FindFirstChild("[Boombox]")
if not boombox then
boombox = backpack.ChildAdded:Wait()
while boombox.Name ~= "[Boombox]" do
boombox = backpack.ChildAdded:Wait()
end end
local tool = nil
for _, v in ipairs(char:GetChildren()) do
if v:IsA("Tool") then
tool = v
v.Parent = backpack
break end end
boombox.Parent = char
replicatedStorage:WaitForChild("MainRemote"):FireServer(Method, id)
boombox.Parent = backpack
if tool then
tool.Parent = char
end end

function reach()
    local Plr = game.Players.LocalPlayer
    Plr.Character.RightHand.Size = Vector3.new(20, 20, 20)
    Plr.Character.RightHand.Transparency = 1
    Plr.Character.RightHand.Massless = true	
end
function fastpunch()
    boombox("Play", "558640653")
    boombox("Remove")
    wait(0.14)
    boombox("Stop")
end
local combo = Instance.new("Tool")
combo.Name = "Dash Combo"
combo.RequiresHandle = false
combo.Parent = game.Players.LocalPlayer.Backpack


combo.Activated:Connect(function()
local CurrentCamera = game:GetService("Workspace").CurrentCamera
local RunService = game:GetService("RunService")
local Mouse = game.Players.LocalPlayer:GetMouse()
local plr = game.Players.LocalPlayer
local mouse = plr:GetMouse()
local Runserv = game:GetService("RunService")
local LocalMouse = game.Players.LocalPlayer:GetMouse()
local circle = Drawing.new("Circle")
circle.Color = Color3.fromRGB(255,255,255)
circle.Thickness = 0
circle.NumSides = 732
circle.Radius = 50
circle.Thickness = 0
circle.Transparency = 0.7
circle.Visible = false
circle.Filled = false
Runserv.RenderStepped:Connect(function()
circle.Position = Vector2.new(mouse.X,mouse.Y+35)
end)

local CC = game:GetService("Workspace").CurrentCamera
function getClosestPlayerToCursor()
local closestPlayer
local shortestDistance = circle.Radius
for i, v in pairs(game.Players:GetPlayers()) do
    if v ~= game.Players.LocalPlayer and v.Character and v.Character:FindFirstChild("Humanoid") and v.Character.Humanoid.Health ~= 0 and v.Character:FindFirstChild("LowerTorso") then
        local pos = CC:WorldToViewportPoint(v.Character.PrimaryPart.Position)
        local magnitude = (Vector2.new(pos.X, pos.Y) - Vector2.new(LocalMouse.X, LocalMouse.Y)).magnitude
        if magnitude < shortestDistance then
            closestPlayer = v
            shortestDistance = magnitude
        end
    end
end
return closestPlayer
end
function trailB()
local trail1 = Instance.new("Trail")
local Attatchment1 = Instance.new("Attachment")
local Attatchment2 = Instance.new("Attachment")
Attatchment1.Parent = game.Players.LocalPlayer.Character.UpperTorso
Attatchment1.Position = Vector3.new(0,-1.8,0)
Attatchment2.Parent = game.Players.LocalPlayer.Character.UpperTorso
Attatchment2.Position = Vector3.new(0,1.8,0)
trail1.Parent = game.Players.LocalPlayer.Character.HumanoidRootPart
trail1.Attachment0 = Attatchment1
trail1.Attachment1 = Attatchment2
trail1.LightInfluence = 0
trail1.LightEmission = 1
trail1.Enabled = true
trail1.MaxLength = 0
trail1.MinLength = 0
trail1.Name = "trail1"
trail1.TextureLength = 40
trail1.TextureMode = Enum.TextureMode.Static
trail1.Brightness = 1
trail1.Color = ColorSequence.new(Color3.fromRGB(220,0,0))
trail1.FaceCamera = true
trail1.Texture = "rbxassetid://15450782"
trail1.Lifetime = 1

-- trial.Enabled = true
local trail = Instance.new("Trail")
local Attatchment1 = Instance.new("Attachment")
local Attatchment2 = Instance.new("Attachment")
Attatchment1.Parent = game.Players.LocalPlayer.Character.HumanoidRootPart -- 163, 162, 165
Attatchment1.Position = Vector3.new(0,-1.8,0)
Attatchment2.Parent = game.Players.LocalPlayer.Character.HumanoidRootPart
Attatchment2.Position = Vector3.new(0,1.8,0)
trail.Parent = game.Players.LocalPlayer.Character.HumanoidRootPart
trail.Attachment0 = Attatchment1
trail.Attachment1 = Attatchment2
trail.LightInfluence = 0
trail.Name = "trail2"
trail.LightEmission = 1
trail.Enabled = true
trail.MaxLength = 0
trail.MinLength = 0
trail.TextureLength = 40
trail.TextureMode = Enum.TextureMode.Static
trail.Brightness = 1
trail.Color = ColorSequence.new(Color3.fromRGB(255, 85, 0))
trail.FaceCamera = true
trail.Texture = "rbxassetid://15450782"
trail.Lifetime = 1
end
local e = getClosestPlayerToCursor()
local Plr = game.Players.LocalPlayer
game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = e.Character.HumanoidRootPart.CFrame * CFrame.new(-5,0,-7)
local Plr = game.Players.LocalPlayer
Plr.Character.Humanoid:EquipTool(Plr.Backpack["Fist"])
Plr.Character:FindFirstChild('Fist'):Activate()
trailB()
fastpunch()
game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = e.Character.HumanoidRootPart.CFrame * CFrame.new(-5,0,-7)
fastpunch()
game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = e.Character.HumanoidRootPart.CFrame * CFrame.new(5,0,7)
fastpunch()
game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = e.Character.HumanoidRootPart.CFrame * CFrame.new(-5,0,7)
fastpunch()
game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = e.Character.HumanoidRootPart.CFrame * CFrame.new(5,0,-7)
fastpunch()

reach()
boombox("Play", "157325701")
boombox("Remove")
wait(0.5)
game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = e.Character.HumanoidRootPart.CFrame * CFrame.new(5,0,-5)
wait(0.9)
boombox("Stop")
        local Plr = game.Players.LocalPlayer
Plr.Character.RightHand.Size = Vector3.new(1, 1, 1)
Plr.Character.RightHand.Transparency = 1
Plr.Character.RightHand.Massless = false
game.Players.LocalPlayer.Character.Humanoid:EquipTool(Plr.Backpack["Dash Combo"])
wait(0.5)
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail2:destroy()
game.Players.LocalPlayer.Character.HumanoidRootPart.trail1:destroy()
end)
