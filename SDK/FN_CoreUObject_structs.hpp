#pragma once

// Fortnite SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#define CHECK_VALID( _v ) 0

namespace SDK
{
	//---------------------------------------------------------------------------
	//Enums
	//---------------------------------------------------------------------------

	// Enum CoreUObject.EInterpCurveMode
	enum class EInterpCurveMode : uint8_t
	{
		CIM_Linear = 0,
		CIM_CurveAuto = 1,
		CIM_Constant = 2,
		CIM_CurveUser = 3,
		CIM_CurveBreak = 4,
		CIM_CurveAutoClamped = 5,
		CIM_MAX = 6
	};


	// Enum CoreUObject.ERangeBoundTypes
	enum class ERangeBoundTypes : uint8_t
	{
		Exclusive = 0,
		Inclusive = 1,
		Open = 2,
		ERangeBoundTypes_MAX = 3
	};


	// Enum CoreUObject.EUnit
	enum class EUnit : uint8_t
	{
		Micrometers = 0,
		Millimeters = 1,
		Centimeters = 2,
		Meters = 3,
		Kilometers = 4,
		Inches = 5,
		Feet = 6,
		Yards = 7,
		Miles = 8,
		Lightyears = 9,
		Degrees = 10,
		Radians = 11,
		MetersPerSecond = 12,
		KilometersPerHour = 13,
		MilesPerHour = 14,
		Celsius = 15,
		Farenheit = 16,
		Kelvin = 17,
		Micrograms = 18,
		Milligrams = 19,
		Grams = 20,
		Kilograms = 21,
		MetricTons = 22,
		Ounces = 23,
		Pounds = 24,
		Stones = 25,
		Newtons = 26,
		PoundsForce = 27,
		KilogramsForce = 28,
		Hertz = 29,
		Kilohertz = 30,
		Megahertz = 31,
		Gigahertz = 32,
		RevolutionsPerMinute = 33,
		Bytes = 34,
		Kilobytes = 35,
		Megabytes = 36,
		Gigabytes = 37,
		Terabytes = 38,
		Lumens = 39,
		Milliseconds = 40,
		Seconds = 41,
		Minutes = 42,
		Hours = 43,
		Days = 44,
		Months = 45,
		Years = 46,
		Multiplier = 47,
		Unspecified = 48,
		EUnit_MAX = 49
	};


	// Enum CoreUObject.EMouseCursor
	enum class EMouseCursor : uint8_t
	{
		None = 0,
		Default = 1,
		TextEditBeam = 2,
		ResizeLeftRight = 3,
		ResizeUpDown = 4,
		ResizeSouthEast = 5,
		ResizeSouthWest = 6,
		CardinalCross = 7,
		Crosshairs = 8,
		Hand = 9,
		GrabHand = 10,
		GrabHandClosed = 11,
		SlashedCircle = 12,
		EyeDropper = 13,
		EMouseCursor_MAX = 14
	};


	// Enum CoreUObject.EPixelFormat
	enum class EPixelFormat : uint8_t
	{
		PF_Unknown = 0,
		PF_A32B32G32R32F = 1,
		PF_B8G8R8A8 = 2,
		PF_G8 = 3,
		PF_G16 = 4,
		PF_DXT1 = 5,
		PF_DXT3 = 6,
		PF_DXT5 = 7,
		PF_UYVY = 8,
		PF_FloatRGB = 9,
		PF_FloatRGBA = 10,
		PF_DepthStencil = 11,
		PF_ShadowDepth = 12,
		PF_R32_FLOAT = 13,
		PF_G16R16 = 14,
		PF_G16R16F = 15,
		PF_G16R16F_FILTER = 16,
		PF_G32R32F = 17,
		PF_A2B10G10R10 = 18,
		PF_A16B16G16R16 = 19,
		PF_D24 = 20,
		PF_R16F = 21,
		PF_R16F_FILTER = 22,
		PF_BC5 = 23,
		PF_V8U8 = 24,
		PF_A1 = 25,
		PF_FloatR11G11B10 = 26,
		PF_A8 = 27,
		PF_R32_UINT = 28,
		PF_R32_SINT = 29,
		PF_PVRTC2 = 30,
		PF_PVRTC4 = 31,
		PF_R16_UINT = 32,
		PF_R16_SINT = 33,
		PF_R16G16B16A16_UINT = 34,
		PF_R16G16B16A16_SINT = 35,
		PF_R5G6B5_UNORM = 36,
		PF_R8G8B8A8 = 37,
		PF_A8R8G8B8 = 38,
		PF_BC4 = 39,
		PF_R8G8 = 40,
		PF_ATC_RGB = 41,
		PF_ATC_RGBA_E = 42,
		PF_ATC_RGBA_I = 43,
		PF_X24_G8 = 44,
		PF_ETC1 = 45,
		PF_ETC2_RGB = 46,
		PF_ETC2_RGBA = 47,
		PF_R32G32B32A32_UINT = 48,
		PF_R16G16_UINT = 49,
		PF_ASTC_4x4 = 50,
		PF_ASTC_6x6 = 51,
		PF_ASTC_8x8 = 52,
		PF_ASTC_10x10 = 53,
		PF_ASTC_12x12 = 54,
		PF_BC6H = 55,
		PF_BC7 = 56,
		PF_R8_UINT = 57
	};


	// Enum CoreUObject.EAxis
	enum class EAxis : uint8_t
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		EAxis_MAX = 4
	};


	// Enum CoreUObject.ELogTimes
	enum class ELogTimes : uint8_t
	{
		None = 0,
		UTC = 1,
		SinceGStartTime = 2,
		ELogTimes_MAX = 3
	};


	// Enum CoreUObject.ESearchDir
	enum class ESearchDir : uint8_t
	{
		FromStart = 0,
		FromEnd = 1,
		ESearchDir_MAX = 2
	};


	// Enum CoreUObject.ESearchCase
	enum class ESearchCase : uint8_t
	{
		CaseSensitive = 0,
		IgnoreCase = 1,
		ESearchCase_MAX = 2
	};


	// Enum CoreUObject.ELifetimeCondition
	enum class ELifetimeCondition : uint8_t
	{
		COND_None = 0,
		COND_InitialOnly = 1,
		COND_OwnerOnly = 2,
		COND_SkipOwner = 3,
		COND_SimulatedOnly = 4,
		COND_AutonomousOnly = 5,
		COND_SimulatedOrPhysics = 6,
		COND_InitialOrOwner = 7,
		COND_Custom = 8,
		COND_ReplayOrOwner = 9,
		COND_ReplayOnly = 10,
		COND_SimulatedOnlyNoReplay = 11,
		COND_SimulatedOrPhysicsNoReplay = 12,
		COND_SkipReplay = 13,
		COND_Max = 14
	};



	//---------------------------------------------------------------------------
	//Script Structs
	//---------------------------------------------------------------------------

	// ScriptStruct CoreUObject.JoinabilitySettings
	// 0x0018
	struct FJoinabilitySettings
	{
		struct FName                                       SessionName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bPublicSearchable;                                        // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bAllowInvites;                                            // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bJoinViaPresence;                                         // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bJoinViaPresenceFriendsOnly;                              // 0x000B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                MaxPlayers;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                MaxPartySize;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.UniqueNetIdWrapper
	// 0x0001
	struct FUniqueNetIdWrapper
	{
		unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.Guid
	// 0x0010
	struct FGuid
	{
		int                                                A;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		int                                                B;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		int                                                C;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		int                                                D;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Vector
	// 0x000C
	struct FVector
	{
		float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Z;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)

		inline FVector()
			: X(0), Y(0), Z(0)
		{ }

		inline FVector(float x, float y, float z)
			: X(x),
			Y(y),
			Z(z)
		{ }

		FORCEINLINE FVector FVector::operator-(const FVector& V)
		{
			return FVector(X - V.X, Y - V.Y, Z - V.Z);
		}

		FORCEINLINE FVector FVector::operator*(float Scale) const
		{
			return FVector(X * Scale, Y * Scale, Z * Scale);
		}

		FORCEINLINE FVector FVector::operator/(float Scale) const
		{
			const float RScale = 1.f / Scale;
			return FVector(X * RScale, Y * RScale, Z * RScale);
		}

		FORCEINLINE FVector FVector::operator+(float A) const
		{
			return FVector(X + A, Y + A, Z + A);
		}

		FORCEINLINE FVector FVector::operator-(float A) const
		{
			return FVector(X - A, Y - A, Z - A);
		}

		FORCEINLINE FVector FVector::operator*(const FVector& V) const
		{
			return FVector(X * V.X, Y * V.Y, Z * V.Z);
		}

		FORCEINLINE FVector FVector::operator/(const FVector& V) const
		{
			return FVector(X / V.X, Y / V.Y, Z / V.Z);
		}

		FORCEINLINE float FVector::operator|(const FVector& V) const
		{
			return X*V.X + Y*V.Y + Z*V.Z;
		}

		FORCEINLINE float FVector::operator^(const FVector& V) const
		{
			return X*V.Y - Y*V.X - Z*V.Z;
		}

		FORCEINLINE FVector& FVector::operator+=(const FVector& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X += v.X;
			Y += v.Y;
			Z += v.Z;
			return *this;
		}

		FORCEINLINE FVector& FVector::operator-=(const FVector& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X -= v.X;
			Y -= v.Y;
			Z -= v.Z;
			return *this;
		}

		FORCEINLINE FVector& FVector::operator*=(const FVector& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X *= v.X;
			Y *= v.Y;
			Z *= v.Z;
			return *this;
		}

		FORCEINLINE FVector& FVector::operator/=(const FVector& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X /= v.X;
			Y /= v.Y;
			Z /= v.Z;
			return *this;
		}

		FORCEINLINE bool FVector::operator==(const FVector& src) const
		{
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.X == X) && (src.Y == Y) && (src.Z == Z);
		}

		FORCEINLINE bool FVector::operator!=(const FVector& src) const
		{
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.X != X) || (src.Y != Y) || (src.Z != Z);
		}

		FORCEINLINE float FVector::Size() const
		{
			return sqrt(X*X + Y*Y + Z*Z);
		}

		FORCEINLINE float FVector::Size2D() const
		{
			return sqrt(X*X + Y*Y);
		}

		FORCEINLINE float FVector::SizeSquared() const
		{
			return X*X + Y*Y + Z*Z;
		}

		FORCEINLINE float FVector::SizeSquared2D() const
		{
			return X*X + Y*Y;
		}

		FORCEINLINE float FVector::Dot(const FVector& vOther) const
		{
			const FVector& a = *this;

			return (a.X * vOther.X + a.Y * vOther.Y + a.Z * vOther.Z);
		}

		FORCEINLINE FVector FVector::Normalize()
		{
			FVector vector;
			float length = this->Size();

			if (length != 0)
			{
				vector.X = X / length;
				vector.Y = Y / length;
				vector.Z = Z / length;
			}
			else
				vector.X = vector.Y = 0.0f;
			vector.Z = 1.0f;

			return vector;
		}

	};

	// ScriptStruct CoreUObject.Vector4
	// 0x0010
	struct alignas(16) FVector4
	{
		float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Z;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              W;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Vector2D
	// 0x0008
	struct FVector2D
	{
		float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)

		inline FVector2D()
			: X(0), Y(0)
		{ }

		inline FVector2D(float x, float y)
			: X(x),
			Y(y)
		{ }

		FORCEINLINE FVector2D FVector2D::operator-(const FVector2D& V)
		{
			return FVector2D(X - V.X, Y - V.Y);
		}

		FORCEINLINE FVector2D FVector2D::operator*(float Scale) const
		{
			return FVector2D(X * Scale, Y * Scale);
		}

		FORCEINLINE FVector2D FVector2D::operator/(float Scale) const
		{
			const float RScale = 1.f / Scale;
			return FVector2D(X * RScale, Y * RScale);
		}

		FORCEINLINE FVector2D FVector2D::operator+(float A) const
		{
			return FVector2D(X + A, Y + A);
		}

		FORCEINLINE FVector2D FVector2D::operator-(float A) const
		{
			return FVector2D(X - A, Y - A);
		}

		FORCEINLINE FVector2D FVector2D::operator*(const FVector2D& V) const
		{
			return FVector2D(X * V.X, Y * V.Y);
		}

		FORCEINLINE FVector2D FVector2D::operator/(const FVector2D& V) const
		{
			return FVector2D(X / V.X, Y / V.Y);
		}

		FORCEINLINE float FVector2D::operator|(const FVector2D& V) const
		{
			return X*V.X + Y*V.Y;
		}

		FORCEINLINE float FVector2D::operator^(const FVector2D& V) const
		{
			return X*V.Y - Y*V.X;
		}

		FORCEINLINE FVector2D& FVector2D::operator+=(const FVector2D& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X += v.X;
			Y += v.Y;
			return *this;
		}

		FORCEINLINE FVector2D& FVector2D::operator-=(const FVector2D& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X -= v.X;
			Y -= v.Y;
			return *this;
		}

		FORCEINLINE FVector2D& FVector2D::operator*=(const FVector2D& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X *= v.X;
			Y *= v.Y;
			return *this;
		}

		FORCEINLINE FVector2D& FVector2D::operator/=(const FVector2D& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X /= v.X;
			Y /= v.Y;
			return *this;
		}

		FORCEINLINE bool FVector2D::operator==(const FVector2D& src) const
		{
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.X == X) && (src.Y == Y);
		}

		FORCEINLINE bool FVector2D::operator!=(const FVector2D& src) const
		{
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.X != X) || (src.Y != Y);
		}

		FORCEINLINE float FVector2D::Size() const
		{
			return sqrt(X*X + Y*Y);
		}

		FORCEINLINE float FVector2D::SizeSquared() const
		{
			return X*X + Y*Y;
		}

		FORCEINLINE float FVector2D::Dot(const FVector2D& vOther) const
		{
			const FVector2D& a = *this;

			return (a.X * vOther.X + a.Y * vOther.Y);
		}

		FORCEINLINE FVector2D FVector2D::Normalize()
		{
			FVector2D vector;
			float length = this->Size();

			if (length != 0)
			{
				vector.X = X / length;
				vector.Y = Y / length;
			}
			else
				vector.X = vector.Y = 0.0f;

			return vector;
		}
	};

	// ScriptStruct CoreUObject.TwoVectors
	// 0x0018
	struct FTwoVectors
	{
		struct FVector                                     v1;                                                       // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FVector                                     v2;                                                       // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Plane
	// 0x0004 (0x0010 - 0x000C)
	struct alignas(16) FPlane : public FVector
	{
		float                                              W;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Rotator
	// 0x000C
	struct FRotator
	{
		float                                              Pitch;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Yaw;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Roll;                                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)

		inline FRotator()
			: Pitch(0), Yaw(0), Roll(0)
		{ }

		inline FRotator(float x, float y, float z)
			: Pitch(x),
			Yaw(y),
			Roll(z)
		{ }

		FORCEINLINE FRotator FRotator::operator+(const FRotator& V)
		{
			return FRotator(Pitch + V.Pitch, Yaw + V.Yaw, Roll + V.Roll);
		}

		FORCEINLINE FRotator FRotator::operator-(const FRotator& V)
		{
			return FRotator(Pitch - V.Pitch, Yaw - V.Yaw, Roll - V.Roll);
		}

		FORCEINLINE FRotator FRotator::operator*(float Scale) const
		{
			return FRotator(Pitch * Scale, Yaw * Scale, Roll * Scale);
		}

		FORCEINLINE FRotator FRotator::operator/(float Scale) const
		{
			const float RScale = 1.f / Scale;
			return FRotator(Pitch * RScale, Yaw * RScale, Roll * RScale);
		}

		FORCEINLINE FRotator FRotator::operator+(float A) const
		{
			return FRotator(Pitch + A, Yaw + A, Roll + A);
		}

		FORCEINLINE FRotator FRotator::operator-(float A) const
		{
			return FRotator(Pitch - A, Yaw - A, Roll - A);
		}

		FORCEINLINE FRotator FRotator::operator*(const FRotator& V) const
		{
			return FRotator(Pitch * V.Pitch, Yaw * V.Yaw, Roll * V.Roll);
		}

		FORCEINLINE FRotator FRotator::operator/(const FRotator& V) const
		{
			return FRotator(Pitch / V.Pitch, Yaw / V.Yaw, Roll / V.Roll);
		}

		FORCEINLINE float FRotator::operator|(const FRotator& V) const
		{
			return Pitch*V.Pitch + Yaw*V.Yaw + Roll*V.Roll;
		}

		FORCEINLINE FRotator& FRotator::operator+=(const FRotator& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			Pitch += v.Pitch;
			Yaw += v.Yaw;
			Roll += v.Roll;
			return *this;
		}

		FORCEINLINE FRotator& FRotator::operator-=(const FRotator& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			Pitch -= v.Pitch;
			Yaw -= v.Yaw;
			Roll -= v.Roll;
			return *this;
		}

		FORCEINLINE FRotator& FRotator::operator*=(const FRotator& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			Pitch *= v.Pitch;
			Yaw *= v.Yaw;
			Roll *= v.Roll;
			return *this;
		}

		FORCEINLINE FRotator& FRotator::operator/=(const FRotator& v)
		{
			CHECK_VALID(*this);
			CHECK_VALID(v);
			Pitch /= v.Pitch;
			Yaw /= v.Yaw;
			Roll /= v.Roll;
			return *this;
		}

		FORCEINLINE float FRotator::operator^(const FRotator& V) const
		{
			return Pitch*V.Yaw - Yaw*V.Pitch - Roll*V.Roll;
		}

		FORCEINLINE bool FRotator::operator==(const FRotator& src) const
		{
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.Pitch == Pitch) && (src.Yaw == Yaw) && (src.Roll == Roll);
		}

		FORCEINLINE bool FRotator::operator!=(const FRotator& src) const
		{
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.Pitch != Pitch) || (src.Yaw != Yaw) || (src.Roll != Roll);
		}

		FORCEINLINE float FRotator::Size() const
		{
			return sqrt(Pitch*Pitch + Yaw* Yaw + Roll*Roll);
		}


		FORCEINLINE float FRotator::SizeSquared() const
		{
			return Pitch*Pitch + Yaw* Yaw + Roll*Roll;
		}

		FORCEINLINE float FRotator::Dot(const FRotator& vOther) const
		{
			const FRotator& a = *this;

			return (a.Pitch * vOther.Pitch + a.Yaw * vOther.Yaw + a.Roll * vOther.Roll);
		}

				FORCEINLINE float FRotator::ClampAxis(float Angle)
		{
			// returns Angle in the range (-360,360)
			Angle = fmod(Angle, 360.f);

			if (Angle < 0.f)
			{
				// shift to [0,360) range
				Angle += 360.f;
			}

			return Angle;
		}

		FORCEINLINE float FRotator::NormalizeAxis(float Angle)
		{
			// returns Angle in the range [0,360)
			Angle = ClampAxis(Angle);

			if (Angle > 180.f)
			{
				// shift to (-180,180]
				Angle -= 360.f;
			}

			return Angle;
		}

		FORCEINLINE void FRotator::Normalize()
		{
			Pitch = NormalizeAxis(Pitch);
			Yaw = NormalizeAxis(Yaw);
			Roll = NormalizeAxis(Roll);
		}

		FORCEINLINE FRotator FRotator::GetNormalized() const
		{
			FRotator Rot = *this;
			Rot.Normalize();
			return Rot;
		}
	};

	// ScriptStruct CoreUObject.Quat
	// 0x0010
	struct alignas(16) FQuat
	{
		float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Z;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              W;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.PackedNormal
	// 0x0004
	struct FPackedNormal
	{
		unsigned char                                      X;                                                        // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      Y;                                                        // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      Z;                                                        // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      W;                                                        // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.PackedRGB10A2N
	// 0x0004
	struct FPackedRGB10A2N
	{
		int                                                Packed;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.PackedRGBA16N
	// 0x0008
	struct FPackedRGBA16N
	{
		int                                                XY;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		int                                                ZW;                                                       // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.IntPoint
	// 0x0008
	struct FIntPoint
	{
		int                                                X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		int                                                Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.IntVector
	// 0x000C
	struct FIntVector
	{
		int                                                X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		int                                                Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		int                                                Z;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Color
	// 0x0004
	struct FColor
	{
		unsigned char                                      B;                                                        // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      G;                                                        // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      R;                                                        // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      A;                                                        // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.LinearColor
	// 0x0010
	struct FLinearColor
	{
		float                                              R;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              G;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              B;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              A;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)

		inline FLinearColor()
			: R(0), G(0), B(0), A(0)
		{ }

		inline FLinearColor(float r, float g, float b, float a)
			: R(r),
			G(g),
			B(b),
			A(a)
		{ }

	};

	// ScriptStruct CoreUObject.Box
	// 0x001C
	struct FBox
	{
		struct FVector                                     Min;                                                      // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FVector                                     Max;                                                      // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      IsValid;                                                  // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.Box2D
	// 0x0014
	struct FBox2D
	{
		struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      IsValid;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.BoxSphereBounds
	// 0x001C
	struct FBoxSphereBounds
	{
		struct FVector                                     Origin;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FVector                                     BoxExtent;                                                // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              SphereRadius;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.OrientedBox
	// 0x003C
	struct FOrientedBox
	{
		struct FVector                                     Center;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FVector                                     AxisX;                                                    // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FVector                                     AxisY;                                                    // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FVector                                     AxisZ;                                                    // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              ExtentX;                                                  // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              ExtentY;                                                  // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              ExtentZ;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Matrix
	// 0x0040
	struct FMatrix
	{
		struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointFloat
	// 0x0014
	struct FInterpCurvePointFloat
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              OutVal;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ArriveTangent;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              LeaveTangent;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveFloat
	// 0x0018
	struct FInterpCurveFloat
	{
		TArray<struct FInterpCurvePointFloat>              Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointVector2D
	// 0x0020
	struct FInterpCurvePointVector2D
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector2D                                   OutVal;                                                   // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FVector2D                                   ArriveTangent;                                            // 0x000C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FVector2D                                   LeaveTangent;                                             // 0x0014(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveVector2D
	// 0x0018
	struct FInterpCurveVector2D
	{
		TArray<struct FInterpCurvePointVector2D>           Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointVector
	// 0x002C
	struct FInterpCurvePointVector
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector                                     OutVal;                                                   // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveVector
	// 0x0018
	struct FInterpCurveVector
	{
		TArray<struct FInterpCurvePointVector>             Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointQuat
	// 0x0050
	struct FInterpCurvePointQuat
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
		struct FQuat                                       OutVal;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FQuat                                       ArriveTangent;                                            // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FQuat                                       LeaveTangent;                                             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveQuat
	// 0x0018
	struct FInterpCurveQuat
	{
		TArray<struct FInterpCurvePointQuat>               Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
	// 0x0050
	struct FInterpCurvePointTwoVectors
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FTwoVectors                                 OutVal;                                                   // 0x0004(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FTwoVectors                                 ArriveTangent;                                            // 0x001C(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FTwoVectors                                 LeaveTangent;                                             // 0x0034(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x004C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveTwoVectors
	// 0x0018
	struct FInterpCurveTwoVectors
	{
		TArray<struct FInterpCurvePointTwoVectors>         Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointLinearColor
	// 0x0038
	struct FInterpCurvePointLinearColor
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FLinearColor                                OutVal;                                                   // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FLinearColor                                ArriveTangent;                                            // 0x0014(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FLinearColor                                LeaveTangent;                                             // 0x0024(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveLinearColor
	// 0x0018
	struct FInterpCurveLinearColor
	{
		TArray<struct FInterpCurvePointLinearColor>        Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Transform
	// 0x0030
	struct alignas(16) FTransform
	{
		struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		struct FVector                                     Translation;                                              // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
		struct FVector                                     Scale3D;                                                  // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.RandomStream
	// 0x0008
	struct FRandomStream
	{
		int                                                InitialSeed;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		int                                                Seed;                                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.DateTime
	// 0x0008
	struct FDateTime
	{
		unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.Timespan
	// 0x0008
	struct FTimespan
	{
		unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.StringAssetReference
	// 0x0010
	struct FStringAssetReference
	{
		struct FString                                     AssetLongPathname;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	};

	// ScriptStruct CoreUObject.StringClassReference
	// 0x0000 (0x0010 - 0x0010)
	struct FStringClassReference : public FStringAssetReference
	{

	};

	// ScriptStruct CoreUObject.PrimaryAssetType
	// 0x0008
	struct FPrimaryAssetType
	{
		struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.PrimaryAssetId
	// 0x0010
	struct FPrimaryAssetId
	{
		struct FPrimaryAssetType                           PrimaryAssetType;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
		struct FName                                       PrimaryAssetName;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.FallbackStruct
	// 0x0001
	struct FFallbackStruct
	{
		unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.FloatRangeBound
	// 0x0008
	struct FFloatRangeBound
	{
		TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
		float                                              Value;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.FloatRange
	// 0x0010
	struct FFloatRange
	{
		struct FFloatRangeBound                            LowerBound;                                               // 0x0000(0x0008) (CPF_Edit)
		struct FFloatRangeBound                            UpperBound;                                               // 0x0008(0x0008) (CPF_Edit)
	};

	// ScriptStruct CoreUObject.Int32RangeBound
	// 0x0008
	struct FInt32RangeBound
	{
		TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
		int                                                Value;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Int32Range
	// 0x0010
	struct FInt32Range
	{
		struct FInt32RangeBound                            LowerBound;                                               // 0x0000(0x0008) (CPF_Edit)
		struct FInt32RangeBound                            UpperBound;                                               // 0x0008(0x0008) (CPF_Edit)
	};

	// ScriptStruct CoreUObject.FloatInterval
	// 0x0008
	struct FFloatInterval
	{
		float                                              Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Int32Interval
	// 0x0008
	struct FInt32Interval
	{
		int                                                Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
